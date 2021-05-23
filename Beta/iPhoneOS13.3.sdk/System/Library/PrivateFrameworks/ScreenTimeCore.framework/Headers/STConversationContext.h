/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface STConversationContext : NSObject

{
    _Bool _allowedByScreenTime;
    _Bool _applicationCurrentlyLimited;
    _Bool _shouldBeAllowedByScreenTimeWhenLimited;
    _Bool _shouldBeAllowedDuringGeneralScreenTime;
    _Bool _emergencyModeEnabled;
    NSDictionary *_allowedByContactsHandle;
    NSDictionary *_contactsByHandle;
    unsigned long long _currentApplicationState;
}

@property _Bool allowedByScreenTime;
@property (copy) NSDictionary *allowedByContactsHandle;
@property _Bool applicationCurrentlyLimited;
@property _Bool shouldBeAllowedByScreenTimeWhenLimited;
@property _Bool shouldBeAllowedDuringGeneralScreenTime;
@property (copy) NSDictionary *contactsByHandle;
@property unsigned long long currentApplicationState;
@property _Bool emergencyModeEnabled;

- (void)updateShouldBeAllowedDuringGeneralScreenTime:(_Bool)arg1 shouldBeAllowedByScreenTimeWhenLimited:(_Bool)arg2 currentApplicationState:(unsigned long long)arg3 emergencyModeEnabled:(_Bool)arg4;

@end
