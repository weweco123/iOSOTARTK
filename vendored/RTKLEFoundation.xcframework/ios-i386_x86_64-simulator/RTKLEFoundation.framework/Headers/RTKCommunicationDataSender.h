//
//  RTKCommunicationDataSender.h
//  RTKLEFoundation
//
//  Created by jerome_gu on 2020/1/21.
//  Copyright © 2020 jerome_gu. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifdef RTK_SDK_IS_STATIC_LIBRARY
#import "RTKLEGeneralDefines.h"
#import "RTKPackageCommunication.h"
#else
#import <RTKLEFoundation/RTKLEGeneralDefines.h>
#import <RTKLEFoundation/RTKPackageCommunication.h>
#endif


NS_ASSUME_NONNULL_BEGIN

@interface RTKCommunicationDataSender : NSObject {
@protected
    BOOL _inProgress;
    RTKLECompletionBlock _completionHandler;
}

- (instancetype)initWithCommunication:(RTKPackageCommunication *)communication MTU:(NSUInteger)size;

@property (nonatomic, readonly) RTKPackageCommunication *communication;
@property (nonatomic, readonly) NSUInteger mtu;


@property (nonatomic, readonly) BOOL inProgress;
- (void)sendData:(NSData *)data withCompletionHandler:(nullable RTKLECompletionBlock)handler;

@property (nonatomic, readonly) NSData *sendingData;

- (void)cancelInProgressSending;

@end

NS_ASSUME_NONNULL_END
