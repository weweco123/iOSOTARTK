//
//  RTKProvisioningProfileExpirationCheck.h
//  RTKLEFoundation
//
//  Created by jerome_gu on 2021/6/18.
//  Copyright © 2021 jerome_gu. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface RTKProvisioningProfileExpirationCheck : NSObject

- (nullable instancetype)init;

@property (nonatomic, readonly) NSDate *expirationDate;

@property (nonatomic, readonly) NSUInteger availableDays;

@end

NS_ASSUME_NONNULL_END
