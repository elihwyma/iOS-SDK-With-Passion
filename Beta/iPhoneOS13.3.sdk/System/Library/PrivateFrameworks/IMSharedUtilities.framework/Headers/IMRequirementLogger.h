/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@interface IMRequirementLogger : NSObject

{
    unsigned char _loggingLevel;
    _Bool _throwFailures;
    const char *_categoryOverride;
}

@property unsigned char loggingLevel;
@property const char *categoryOverride;
@property _Bool throwFailures;

+ (id)sharedInstance;
+ (void)__setSingleton__im:(id)arg1;
+ (id)__singleton__im;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)updateSettingsFromUserDefaults;
- (struct IMRequirementFailed_t)requirementDidFail:(const char *)arg1;

@end
