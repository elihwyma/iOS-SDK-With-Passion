/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBFaceIDCoachingConditionRecipe : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)load;

- (id)title;
- (_Bool)_overrideCoachingConditionEnabled;
- (void)handleVolumeIncrease;
- (void)handleVolumeDecrease;
- (void)_setOverrideCoachingConditionEnabled:(_Bool)arg1;
- (void)_setOverrideCoachingEvent:(unsigned long long)arg1;

@end
