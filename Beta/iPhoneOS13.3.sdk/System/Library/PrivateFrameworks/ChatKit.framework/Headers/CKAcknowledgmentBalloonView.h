/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKBalloonView.h>

@class CKAcknowledgmentGlyphView;

@interface CKAcknowledgmentBalloonView : CKBalloonView

{
    unsigned long long _stackCount;
    long long _coloredPart;
    CKAcknowledgmentGlyphView *_glyphView;
}

@property (nonatomic) unsigned long long stackCount;
@property (nonatomic) long long coloredPart;
@property (retain, nonatomic) CKAcknowledgmentGlyphView *glyphView;

- (void)prepareForReuse;
- (void)configureForAggregateAcknowledgmentChatItem:(id)arg1;

@end
