/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/MFMailboxUid.h>

@class NSString;

@interface MFDAMailbox : MFMailboxUid

{
    NSString *_folderID;
}

@property (copy) NSString *folderID;

- (id)dictionaryRepresentation;
- (id)displayName;
- (id)_folderID;
- (id)_privacySafeDescription;
- (id)initWithName:(id)arg1 attributes:(unsigned int)arg2 account:(id)arg3 folderID:(id)arg4;
- (_Bool)mergeWithUserInfo:(id)arg1;
- (id)URLWithAccount:(id)arg1;

@end
