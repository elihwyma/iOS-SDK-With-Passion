/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/_MFOfflineCacheOperation.h>

@class NSString;

@interface _MFDADeferredNewMailboxOperation : _MFOfflineCacheOperation

{
    NSString *_displayName;
    NSString *_parentFolderID;
    NSString *_temporaryFolderID;
}

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)translateToLocalActionWithConnection:(id)arg1;

@end
