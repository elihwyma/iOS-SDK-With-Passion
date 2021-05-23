/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIGestureRecognizer, UIView;

@protocol UIViewControllerPreviewingDelegate;

__attribute__((visibility("hidden")))
@interface _UIInertPreviewingContext : NSObject

{
    UIGestureRecognizer *_failureRelationshipGestureRecognizer;
    id <UIViewControllerPreviewingDelegate> _delegate;
    UIView *_customViewForInteractiveHighlight;
    UIView *_sourceView;
    struct CGRect _sourceRect;
}

@property (retain, nonatomic) UIView *sourceView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIGestureRecognizer *previewingGestureRecognizerForFailureRelationship;
@property (nonatomic, readonly) id <UIViewControllerPreviewingDelegate> delegate;
@property (nonatomic) struct CGRect sourceRect;
@property (retain, nonatomic) UIView *customViewForInteractiveHighlight;

- (void)setDelegate:(id)arg1;
- (void)unregister;
- (struct CGRect)preferredSourceViewRectInCoordinateSpace:(id)arg1;
- (id)initWithSourceView:(id)arg1;

@end
