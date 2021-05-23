/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class CalPreferences;

@interface EKUIDebugPreferences : NSObject

{
    CalPreferences *_preferences;
}

@property (nonatomic) _Bool showInviteesAndMoreRegion;
@property (nonatomic) _Bool showReportAProblemNotificationButton;

+ (id)shared;

- (id)init;

@end
