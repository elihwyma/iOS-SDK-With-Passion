/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSMutableArray, NSString, UITouch;

__attribute__((visibility("hidden")))
@interface UIDragInteractionContextImpl : NSObject <Swift>

{
    _Bool _shouldAnimateLift;
    _Bool _preparedForLift;
    _Bool _hasBegunDrag;
    _Bool _dragDidBeginInDruid;
    NSMutableArray *_animationBlocks;
    NSMutableArray *_completionBlocks;
    long long _state;
    NSArray *_items;
    CDUnknownBlockType _animations;
    CDUnknownBlockType _completion;
    CDUnknownBlockType __sessionDidBegin;
    long long _invocationType;
    UITouch *_initiationTouch;
    struct CGPoint _initialLocation;
}

@property (nonatomic) long long state;
@property (retain, nonatomic) NSArray *items;
@property (nonatomic) _Bool shouldAnimateLift;
@property (copy, nonatomic) CDUnknownBlockType animations;
@property (copy, nonatomic) CDUnknownBlockType completion;
@property (copy, nonatomic) CDUnknownBlockType _sessionDidBegin;
@property (nonatomic) struct CGPoint initialLocation;
@property (nonatomic, getter=isPreparedForLift) _Bool preparedForLift;
@property (nonatomic) long long invocationType;
@property (retain, nonatomic) UITouch *initiationTouch;
@property (nonatomic) _Bool hasBegunDrag;
@property (nonatomic) _Bool dragDidBeginInDruid;
@property (nonatomic, readonly) NSMutableArray *animationBlocks;
@property (nonatomic, readonly) NSMutableArray *completionBlocks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)addAnimations:(CDUnknownBlockType)arg1;
- (void)addCompletion:(CDUnknownBlockType)arg1;
- (void)_api_addCompletion:(CDUnknownBlockType)arg1;

@end
