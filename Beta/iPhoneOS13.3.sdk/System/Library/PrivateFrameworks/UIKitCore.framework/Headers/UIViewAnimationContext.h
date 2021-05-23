/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, UITableViewCell;

__attribute__((visibility("hidden")))
@interface UIViewAnimationContext : NSObject

{
    NSArray *_viewAnimations;
    long long _animationCount;
    CDUnknownBlockType _completionHandler;
    UITableViewCell *_swipeToDeleteCell;
}

@property (retain, nonatomic) NSArray *viewAnimations;
@property (nonatomic) long long animationCount;
@property (nonatomic, readonly) CDUnknownBlockType completionHandler;
@property (retain, nonatomic) UITableViewCell *swipeToDeleteCell;

- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
