/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class PDAnimationTarget;

__attribute__((visibility("hidden")))
@interface PDTimeCondition : NSObject

{
    _Bool mHasDelay;
    int mDelay;
    _Bool mHasTriggerEvent;
    int mTriggerEvent;
    PDAnimationTarget *mTarget;
}

- (id)init;
- (id)description;
- (void)setTarget:(id)arg1;
- (id)target;
- (int)delay;
- (void)setDelay:(int)arg1;
- (_Bool)hasDelay;
- (int)triggerEvent;
- (void)setTriggerEvent:(int)arg1;
- (_Bool)hasTriggerEvent;
- (int)writeDelay;

@end
