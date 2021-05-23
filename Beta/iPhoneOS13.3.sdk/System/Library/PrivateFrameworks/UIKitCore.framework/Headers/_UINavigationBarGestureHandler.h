/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UINavigationBar, UISwipeGestureRecognizer;

@protocol _UINavigationBarGestureHandlerDelegate;

__attribute__((visibility("hidden")))
@interface _UINavigationBarGestureHandler : NSObject

{
    UISwipeGestureRecognizer *_popSwipeGestureRecognizer;
    UINavigationBar *_navigationBar;
    id <_UINavigationBarGestureHandlerDelegate> _delegate;
    long long _idiom;
}

@property (weak, nonatomic, readonly) UINavigationBar *navigationBar;
@property (weak, nonatomic) id <_UINavigationBarGestureHandlerDelegate> delegate;
@property (nonatomic) long long idiom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)_gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithNavigationBar:(id)arg1;
- (void)_handlePopSwipe:(id)arg1;

@end
