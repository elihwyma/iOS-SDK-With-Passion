/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <DataAccess/DADraftMessageRequest.h>

@class NSString;

@interface MFDAMessageStoreSaveDraftRequest : DADraftMessageRequest

{
    NSString *_messageIDHeader;
    NSString *_folderID;
}

@property (nonatomic, readonly) _Bool shouldSend;
@property (nonatomic, readonly) _Bool isUserRequested;

- (unsigned long long)generationNumber;
- (id)initWithMessage:(id)arg1 mailbox:(id)arg2;

@end
