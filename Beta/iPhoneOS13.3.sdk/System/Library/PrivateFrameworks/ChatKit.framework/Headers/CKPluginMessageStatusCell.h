/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKTranscriptMultilineLabelCell.h>

@class IMBalloonPluginDataSource, NSString, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface CKPluginMessageStatusCell : CKTranscriptMultilineLabelCell

{
    NSString *_balloonBundleID;
    IMBalloonPluginDataSource *_dataSource;
    UIView *_previousPluginSnapshot;
    UIImageView *_imageView;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (copy, nonatomic) NSString *balloonBundleID;
@property (retain, nonatomic) IMBalloonPluginDataSource *dataSource;
@property (retain, nonatomic) UIView *previousPluginSnapshot;

- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviewsForAlignmentContents;
- (void)configureForChatItem:(id)arg1;
- (void)performInsertion:(CDUnknownBlockType)arg1;
- (void)_updateBalloonPluginIconImage;

@end
