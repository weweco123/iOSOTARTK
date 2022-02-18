//
//  RTKCommunicationDataReceiver.h
//  RTKLEFoundation
//
//  Created by jerome_gu on 2020/1/21.
//  Copyright © 2020 jerome_gu. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifdef RTK_SDK_IS_STATIC_LIBRARY
#import "RTKPackageCommunication.h"
#else
#import <RTKLEFoundation/RTKPackageCommunication.h>
#endif


NS_ASSUME_NONNULL_BEGIN

@interface RTKCommunicationDataReceiver : NSObject {
    @protected
    BOOL _inProgress;
    void(^_Nullable _completionHandler)(BOOL success, NSError *_Nullable err, NSData *_Nullable data);
}

@property (nonatomic, readonly) RTKPackageCommunication *communication;
- (instancetype)initWithCommunication:(RTKPackageCommunication *)communication;


@property (nonatomic, readonly) BOOL inProgress;
- (void)startReceiveWithCompletionHandler:(void(^)(BOOL success, NSError *err, NSData *_Nullable receivedData))handler;

- (void)didReceiveDataSlice:(NSData *)dataSlice;

- (void)cancelInProgressReceiving;


/* Protected */
@property (readonly) NSMutableData *receivingData;

@end

NS_ASSUME_NONNULL_END
