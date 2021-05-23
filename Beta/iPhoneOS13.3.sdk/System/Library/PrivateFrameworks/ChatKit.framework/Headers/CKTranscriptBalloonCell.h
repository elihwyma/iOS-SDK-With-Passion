/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKTranscriptMessageContentCell.h>

@class CKBalloonView;

@interface CKTranscriptBalloonCell : CKTranscriptMessageContentCell

{
    _Bool _mayReparentPluginViews;
    CKBalloonView *_balloonView;
}

@property (retain, nonatomic) CKBalloonView *balloonView;
@property (nonatomic) _Bool mayReparentPluginViews;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)clearFilters;
- (void)addFilter:(id)arg1;
- (void)setAnimationPauseReasons:(long long)arg1;
- (void)willLayoutDrawerLabelFrame:(struct CGRect *)arg1;
- (id)messageDisplayView;
- (void)configureForChatItem:(id)arg1;

@end
