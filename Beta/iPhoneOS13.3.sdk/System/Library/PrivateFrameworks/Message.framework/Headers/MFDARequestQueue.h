/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/MFRequestQueue.h>

@class DAMailAccount, NSString;

@interface MFDARequestQueue : MFRequestQueue

{
    DAMailAccount *_account;
    NSString *_folderID;
}

- (id)initWithAccount:(id)arg1 folderID:(id)arg2;
- (id)filterRequests:(id)arg1;
- (_Bool)processRequests:(id)arg1;

@end
