/*
 Image: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
 */

#import <Foundation/NSObject.h>

@interface FLEnvironment : NSObject

@property (nonatomic, readonly) _Bool followUpExtensionSupportEnabled;
@property (nonatomic, readonly) _Bool followUpZeroActionsForTheWorld;

+ (id)currentEnvironment;

- (_Bool)isInternal;
- (_Bool)isUnlocked;
- (_Bool)stressMode;
- (id)stressBundleIdentifiers;
- (_Bool)shouldHideAllFollowUps;
- (void)setFollowUpExtensionSupportEnabled:(_Bool)arg1;
- (id)supportedBundleIdentifiers;

@end
