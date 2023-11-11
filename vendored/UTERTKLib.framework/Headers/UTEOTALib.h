//
//  UTEOTALib.h
//  UTERTKLib
//
//  Created by V V on 2022/11/11.
//

#import <Foundation/Foundation.h>
#import <RTKOTASDK/RTKOTASDK.h>

typedef NS_ENUM(NSInteger, UTEOTALibVerifyType) {
    UTEOTALibVerifyType62X,
    UTEOTALibVerifyType63X,
};

@interface UTEOTALib : NSObject

+ (void)verifyFirmwareOTA:(UTEOTALibVerifyType)type dfu:(RTKDFUUpgrade *)dfu;

@end

