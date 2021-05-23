/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@interface _MFOfflineCacheOperation : NSObject

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)translateToLocalActionWithConnection:(id)arg1;
- (_Bool)databaseID:(id *)arg1 andMailbox:(id *)arg2 forMessageWithRemoteID:(id)arg3 connection:(id)arg4;

@end
