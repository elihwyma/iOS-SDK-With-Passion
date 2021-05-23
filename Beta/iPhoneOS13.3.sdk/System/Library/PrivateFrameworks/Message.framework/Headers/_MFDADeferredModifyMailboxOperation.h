/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/_MFOfflineCacheOperation.h>

@class NSString;

@interface _MFDADeferredModifyMailboxOperation : _MFOfflineCacheOperation

{
    NSString *_folderID;
    NSString *_newParentFolderID;
    NSString *_newDisplayName;
}

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)translateToLocalActionWithConnection:(id)arg1;
- (id)initWithFolderID:(id)arg1 newParentFolderID:(id)arg2 newDisplayName:(id)arg3;

@end
