/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Foundation/NSObject.h>

@class NSString, STAllowance, STDeviceBedtime;

__attribute__((visibility("hidden")))
@interface STIntroductionModel : NSObject

{
    _Bool _deviceForChild;
    STDeviceBedtime *_bedtime;
    STAllowance *_allowance;
    NSString *_parentalControlsPasscode;
    NSString *_recoveryAltDSID;
}

@property _Bool deviceForChild;
@property (retain) STDeviceBedtime *bedtime;
@property (retain) STAllowance *allowance;
@property (retain) NSString *parentalControlsPasscode;
@property (copy) NSString *recoveryAltDSID;

@end
