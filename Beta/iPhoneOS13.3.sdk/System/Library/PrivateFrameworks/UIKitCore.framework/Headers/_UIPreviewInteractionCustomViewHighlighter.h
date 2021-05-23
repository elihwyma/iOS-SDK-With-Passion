/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionCustomViewHighlighter : NSObject

{
    _Bool _customViewFlipsHorizontalAxis;
    UIView *_customView;
}

@property (retain, nonatomic) UIView *customView;
@property (nonatomic) _Bool customViewFlipsHorizontalAxis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)highlightShouldBeginInContainerView:(id)arg1 presentationContainerView:(id)arg2 previewingContext:(id)arg3;
- (void)prepareHighlightWithPreviewingContext:(id)arg1;
- (void)finalizeHighlightForPreviewingContext:(id)arg1;

@end
