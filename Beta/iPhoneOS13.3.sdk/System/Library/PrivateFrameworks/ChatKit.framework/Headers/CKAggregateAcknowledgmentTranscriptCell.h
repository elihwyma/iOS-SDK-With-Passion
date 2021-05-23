/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKAssociatedMessageTranscriptCell.h>

@class CKAcknowledgmentBalloonView;

@interface CKAggregateAcknowledgmentTranscriptCell : CKAssociatedMessageTranscriptCell

{
    _Bool _parentMessageIsFromMe;
}

@property (retain, nonatomic) CKAcknowledgmentBalloonView *balloonView;
@property (nonatomic) _Bool parentMessageIsFromMe;

- (void)prepareForReuse;
- (void)layoutSubviewsForAlignmentContents;
- (void)configureForChatItem:(id)arg1;
- (void)performInsertion:(CDUnknownBlockType)arg1;

@end
