/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <DataAccess/DAMailboxGetUpdatesRequest.h>

@interface _MFDAMessageStoreGetUpdatesRequest : DAMailboxGetUpdatesRequest

{
    _Bool _isUserRequested;
}

@property (nonatomic, readonly) _Bool shouldSend;
@property (nonatomic, readonly) _Bool isUserRequested;

- (unsigned long long)generationNumber;
- (_Bool)mf_alwaysReportFailures;
- (id)initRequestForBodyFormat:(int)arg1 withBodySizeLimit:(int)arg2 isUserRequested:(_Bool)arg3;
- (id)deferredOperation;

@end
