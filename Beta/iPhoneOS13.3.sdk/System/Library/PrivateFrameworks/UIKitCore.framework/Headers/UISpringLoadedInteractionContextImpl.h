/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UISpringLoadedGestureRecognizer, UIView;

@protocol UIDropSession;

__attribute__((visibility("hidden")))
@interface UISpringLoadedInteractionContextImpl : NSObject

{
    id targetItem;
    UIView *targetView;
    UIView *overrideTargetView;
    id overrideTargetItem;
    long long _state;
    UISpringLoadedGestureRecognizer *_currentRecognizer;
}

@property (nonatomic) long long state;
@property (weak, nonatomic) UISpringLoadedGestureRecognizer *currentRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) UIView *targetView;
@property (retain, nonatomic) id targetItem;
@property (nonatomic, readonly) id <UIDropSession> dropSession;
@property (retain, nonatomic) UIView *overrideTargetView;
@property (retain, nonatomic) id overrideTargetItem;

- (struct CGPoint)locationInView:(id)arg1;

@end
