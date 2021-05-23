/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBPIPMorphAnimatorDataSource : NSObject

{
    int _targetProcessIdentifier;
    NSString *_scenePersistenceIdentifier;
}

@property (nonatomic, readonly) int targetProcessIdentifier;
@property (nonatomic, readonly) NSString *scenePersistenceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (struct CGRect)sourceContentFrameForAnimator:(id)arg1;
- (struct CGRect)targetFinalFrameForAnimator:(id)arg1;
- (double)targetFinalCornerRadiusForAnimator:(id)arg1;
- (id)initWithTargetProcessIdentifier:(int)arg1 scenePersistenceIdentifier:(id)arg2;

@end
