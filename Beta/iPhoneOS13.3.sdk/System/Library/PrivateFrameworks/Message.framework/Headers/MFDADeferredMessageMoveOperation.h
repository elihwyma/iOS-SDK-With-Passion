/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/_MFOfflineCacheOperation.h>

@class NSArray, NSString;

@interface MFDADeferredMessageMoveOperation : _MFOfflineCacheOperation

{
    NSArray *_sourceRemoteIDs;
    NSArray *_originalFlags;
    NSArray *_temporaryRemoteIDs;
    NSString *_sourceMailboxID;
    NSString *_destinationMailboxID;
}

+ (_Bool)supportsSecureCoding;
+ (id)log;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)translateToLocalActionWithConnection:(id)arg1;

@end
