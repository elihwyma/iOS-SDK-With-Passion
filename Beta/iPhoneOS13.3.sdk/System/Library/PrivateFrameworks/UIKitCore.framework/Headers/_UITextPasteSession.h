/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSAttributedString, NSString, UITextPasteController, UITextPasteCoordinator, UITextRange;

@protocol UITextPasteSessionDelegate, _UITextPasteProgressSupport;

__attribute__((visibility("hidden")))
@interface _UITextPasteSession : NSObject

{
    _Bool _animating;
    id <UITextPasteSessionDelegate> _delegate;
    UITextPasteController *_controller;
    UITextPasteCoordinator *_coordinator;
    UITextRange *_range;
    id <_UITextPasteProgressSupport> _progressSupport;
    NSAttributedString *_pasteResult;
    NSArray *_originalItems;
    UITextRange *_hiddenRange;
}

@property (weak, nonatomic) UITextPasteController *controller;
@property (retain, nonatomic) UITextPasteCoordinator *coordinator;
@property (retain, nonatomic) UITextRange *range;
@property (retain, nonatomic) id <_UITextPasteProgressSupport> progressSupport;
@property (retain, nonatomic) NSAttributedString *pasteResult;
@property (copy, nonatomic) NSArray *originalItems;
@property (retain, nonatomic) UITextRange *hiddenRange;
@property (nonatomic, readonly, getter=isAnimating) _Bool animating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <UITextPasteSessionDelegate> delegate;

- (void)animationCompleted;
- (id)positionedPasteResult;
- (void)animationStarted;

@end
