/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <DataAccess/DAMailboxRequest.h>

@class DAMailMessage;

@interface DADraftMessageRequest : DAMailboxRequest

{
    _Bool _send;
    DAMailMessage *_message;
}

@property (retain, nonatomic) DAMailMessage *message;
@property (nonatomic) _Bool send;

- (id)description;
- (id)initWithRequestType:(int)arg1 message:(id)arg2 send:(_Bool)arg3;

@end
