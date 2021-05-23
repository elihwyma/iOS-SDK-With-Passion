/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@protocol SBMesaUnlockTriggerDelegate;

@interface SBMesaUnlockTrigger : NSObject

{
    id <SBMesaUnlockTriggerDelegate> _delegate;
    _Bool _authenticated;
}

@property (weak, nonatomic) id <SBMesaUnlockTriggerDelegate> delegate;
@property (nonatomic) _Bool authenticated;

- (id)description;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)screenOff;
- (_Bool)bioUnlock;
- (void)significantUserInteractionOccurred;
- (void)menuButtonDown;
- (void)menuButtonUp;
- (void)fingerOn;
- (void)fingerOff;

@end
