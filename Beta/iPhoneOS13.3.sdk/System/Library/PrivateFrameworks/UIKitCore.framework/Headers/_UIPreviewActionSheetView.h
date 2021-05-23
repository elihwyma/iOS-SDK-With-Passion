/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSString, UILongPressGestureRecognizer;

@protocol _UIPreviewActionSheetViewDelegate;

__attribute__((visibility("hidden")))
@interface _UIPreviewActionSheetView : UIView <Swift>

{
    id <_UIPreviewActionSheetViewDelegate> _delegate;
    CDUnknownBlockType _completionHandler;
    NSArray *_actions;
    NSString *_title;
    UILongPressGestureRecognizer *_captureTouchesRecognizer;
    struct UIEdgeInsets _contentInsets;
}

@property (retain, nonatomic) NSArray *actions;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UILongPressGestureRecognizer *captureTouchesRecognizer;
@property (nonatomic) struct UIEdgeInsets contentInsets;
@property (weak, nonatomic) id <_UIPreviewActionSheetViewDelegate> delegate;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_setupViewHierarchy;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 items:(id)arg3 contentInsets:(struct UIEdgeInsets)arg4;
- (void)_performActionForPreviewAction:(id)arg1 interfaceAction:(id)arg2;

@end
