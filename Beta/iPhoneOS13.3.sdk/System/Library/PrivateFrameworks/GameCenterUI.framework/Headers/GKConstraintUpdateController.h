/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSObject.h>

@class NSPointerArray;

@interface GKConstraintUpdateController : NSObject

{
    NSPointerArray *_constraintsToUpdate;
}

@property (retain, nonatomic) NSPointerArray *constraintsToUpdate;

+ (id)sharedController;

- (void)dealloc;
- (void)_updateConstraints;
- (void)registerConstraint:(id)arg1 leading:(double)arg2 forFontTextStyle:(id)arg3;
- (void)updateConstraint:(id)arg1;

@end
