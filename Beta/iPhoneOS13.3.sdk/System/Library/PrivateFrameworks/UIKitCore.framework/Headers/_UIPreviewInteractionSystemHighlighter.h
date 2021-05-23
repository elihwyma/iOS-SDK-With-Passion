/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionSystemHighlighter : NSObject

{
    _Bool _blinderViewEnabled;
    UIView *_initialSnapshotView;
    UIView *_updatedSnapshotView;
    UIView *_blinderView;
}

@property (retain, nonatomic) UIView *initialSnapshotView;
@property (retain, nonatomic) UIView *updatedSnapshotView;
@property (nonatomic) _Bool blinderViewEnabled;
@property (retain, nonatomic) UIView *blinderView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)highlightShouldBeginInContainerView:(id)arg1 presentationContainerView:(id)arg2 previewingContext:(id)arg3;
- (void)prepareHighlightWithPreviewingContext:(id)arg1;
- (void)finalizeHighlightForPreviewingContext:(id)arg1;
- (id)_newSnapshotViewForPreviewingContext:(id)arg1 afterScreenUpdates:(_Bool)arg2;

@end
