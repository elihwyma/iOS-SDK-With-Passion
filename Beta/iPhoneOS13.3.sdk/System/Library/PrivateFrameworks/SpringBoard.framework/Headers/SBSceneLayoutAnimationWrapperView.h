/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@class NSArray, NSString;

@interface SBSceneLayoutAnimationWrapperView : UIView

{
    long long _layoutOrientation;
    long long _referenceOrientation;
}

@property (nonatomic) long long referenceOrientation;
@property (nonatomic) long long layoutOrientation;
@property (nonatomic, readonly) NSArray *elementWrapperViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)crossfadeWithCompletion:(CDUnknownBlockType)arg1;
- (id)elementWrapperViewForLayoutRole:(long long)arg1;

@end
