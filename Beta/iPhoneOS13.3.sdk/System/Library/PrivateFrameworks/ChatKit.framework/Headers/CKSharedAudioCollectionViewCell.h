/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKSharedContentsCollectionViewCell.h>

@class CKAudioProgressView, UIDateLabel;

__attribute__((visibility("hidden")))
@interface CKSharedAudioCollectionViewCell : CKSharedContentsCollectionViewCell

{
    CKAudioProgressView *_audioPlaybackView;
}

@property (retain, nonatomic) CKAudioProgressView *audioPlaybackView;
@property (retain, nonatomic) UIDateLabel *previewTitleLabel;

+ (id)reuseIdentifier;

- (void)layoutSubviews;
- (void)configureWithAttachmentItem:(id)arg1;
- (id)formattedDurationTextForAsset:(id)arg1;
- (id)formattedCreatedDateTextFromDate:(id)arg1;

@end
