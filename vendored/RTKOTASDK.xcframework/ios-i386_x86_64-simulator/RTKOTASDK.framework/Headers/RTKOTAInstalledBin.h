//
//  RTKOTAInstalledBin.h
//  RTKLEFoundation
//
//  Created by jerome_gu on 2020/5/25.
//  Copyright © 2020 jerome_gu. All rights reserved.
//

#ifdef RTK_SDK_IS_STATIC_LIBRARY
#import "RTKOTABin.h"
#else
#import <RTKOTASDK/RTKOTABin.h>
#endif

/*!
 * Represents which bank image reside.
 */
typedef NS_ENUM(NSUInteger, RTKOTABinBankInfo) {
    RTKOTABinBankInfo_Unknown,
    RTKOTABinBankInfo_Bank0,        ///< Bank 0
    RTKOTABinBankInfo_Bank1,        ///< Bank 1
    RTKOTABinBankInfo_Standalone,   ///< Single Bank
};

NS_ASSUME_NONNULL_BEGIN

/**
 * A concrete RTKOTABin class represents a binary installed in a device.
 */
@interface RTKOTAInstalledBin : RTKOTABin

/**
 * Indicates which bank this image is installed in, or should be upgraded in.
 */
@property (readonly) RTKOTABinBankInfo bankState;

/**
 * The maximum length of thie image section in SOC.
 *
 * @discussion When 0 is returned, section size is undefined.
 */
@property (readonly) NSUInteger sectionSize;

@end

NS_ASSUME_NONNULL_END
