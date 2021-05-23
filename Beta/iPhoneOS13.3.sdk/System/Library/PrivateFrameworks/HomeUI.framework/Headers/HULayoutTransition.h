/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class UIView;

@interface HULayoutTransition : NSObject

{
    unsigned long long _phase;
    UIView *_view;
    CDUnknownBlockType _setupBlock;
    CDUnknownBlockType _transitionBlock;
    CDUnknownBlockType _completionBlock;
    id _fromState;
    id _toState;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType setupBlock;
@property (copy, nonatomic, readonly) CDUnknownBlockType transitionBlock;
@property (copy, nonatomic, readonly) CDUnknownBlockType completionBlock;
@property (retain, nonatomic) id fromState;
@property (retain, nonatomic) id toState;
@property (nonatomic) unsigned long long phase;
@property (nonatomic, readonly) UIView *view;

- (id)init;
- (void)setupTransitionWithFromState:(id)arg1 toState:(id)arg2;
- (void)executeTransition;
- (void)completeTransition;
- (id)initWithView:(id)arg1 setupBlock:(CDUnknownBlockType)arg2 transitionBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;

@end
