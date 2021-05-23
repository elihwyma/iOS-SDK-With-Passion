/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/_MFOfflineCacheOperation.h>

@class NSString;

@interface _MFDADeferredDeleteMessageOperation : _MFOfflineCacheOperation

{
    NSString *_messageID;
}

+ (_Bool)supportsSecureCoding;
+ (id)log;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)translateToLocalActionWithConnection:(id)arg1;

@end
