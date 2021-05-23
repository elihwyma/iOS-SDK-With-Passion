/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/MFOutgoingMessageContent.h>

@class MFPlainTextDocument, NSArray;

@interface MFOutgoingRichtextMessageContent : MFOutgoingMessageContent

{
    _Bool _textPartsAreHTML;
    MFPlainTextDocument *_plaintextAlternative;
    NSArray *_mixedContent;
}

@property (nonatomic) _Bool textPartsAreHTML;
@property (retain, nonatomic) MFPlainTextDocument *plaintextAlternative;
@property (retain, nonatomic) NSArray *mixedContent;

- (id)copy;
- (id)richtextContent;

@end
