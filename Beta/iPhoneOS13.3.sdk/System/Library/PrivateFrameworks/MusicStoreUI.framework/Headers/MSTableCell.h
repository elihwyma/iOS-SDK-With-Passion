/*
 Image: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
 */

#import <SUTableCell.h>

@class MSAudioProgressView, SUPlayerStatus, UIImageView, UIView;

@interface MSTableCell : SUTableCell

{
    UIImageView *_backsideSnapshotView;
    UIView *_previewContainerView;
    MSAudioProgressView *_previewProgressView;
    SUPlayerStatus *_previewStatus;
}

@property (retain, nonatomic) SUPlayerStatus *previewStatus;

- (void)dealloc;
- (void)setPreviewStatus:(id)arg1 animated:(_Bool)arg2;
- (void)_flipFromPreviewProgressView;
- (void)_destroyPreviewProgressView;
- (void)_flipToPreviewProgressView;

@end
