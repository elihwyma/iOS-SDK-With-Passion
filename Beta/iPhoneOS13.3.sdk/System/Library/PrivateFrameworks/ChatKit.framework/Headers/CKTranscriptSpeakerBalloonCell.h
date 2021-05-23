/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKTranscriptBalloonCell.h>

@class CKSpeakerButton;

@interface CKTranscriptSpeakerBalloonCell : CKTranscriptBalloonCell

{
    _Bool _speakerEnabled;
    _Bool _adjustSpeakerForAcknowledgment;
    _Bool _shouldShowText;
    CKSpeakerButton *_speakerButton;
}

@property (retain, nonatomic) CKSpeakerButton *speakerButton;
@property (nonatomic) _Bool shouldShowText;
@property (nonatomic, getter=isSpeakerEnabled) _Bool speakerEnabled;
@property (nonatomic, getter=isSpeakerHidden) _Bool speakerHidden;
@property (nonatomic) _Bool adjustSpeakerForAcknowledgment;

- (void)setOrientation:(BOOL)arg1;
- (void)layoutSubviewsForAlignmentContents;

@end
