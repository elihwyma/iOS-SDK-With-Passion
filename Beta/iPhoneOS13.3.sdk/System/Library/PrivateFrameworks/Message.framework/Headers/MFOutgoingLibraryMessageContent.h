/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/MFOutgoingMessageContent.h>

@class MFLibraryMessage;

@interface MFOutgoingLibraryMessageContent : MFOutgoingMessageContent

{
    MFLibraryMessage *_libraryMessage;
}

@property (retain, nonatomic) MFLibraryMessage *libraryMessage;

- (id)copy;
- (id)headers;
- (id)libraryContent;

@end
