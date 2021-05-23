/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/_MFOfflineCacheOperation.h>

@class NSString;

@interface MFDADeferredStoreDraftOperation : _MFOfflineCacheOperation

{
    NSString *_messageIDHeader;
    NSString *_folderID;
}

+ (_Bool)supportsSecureCoding;
+ (id)log;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)translateToLocalActionWithConnection:(id)arg1;
- (id)initWithMessageIDHeader:(id)arg1 mailbox:(id)arg2;

@end
