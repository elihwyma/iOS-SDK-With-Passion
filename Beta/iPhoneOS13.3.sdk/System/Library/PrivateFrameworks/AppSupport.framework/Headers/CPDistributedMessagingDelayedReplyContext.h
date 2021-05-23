/*
 Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <Foundation/NSObject.h>

@interface CPDistributedMessagingDelayedReplyContext : NSObject

{
    unsigned int _replyPort;
    _Bool _portPassing;
}

@property (nonatomic) unsigned int replyPort;
@property (nonatomic) _Bool portPassing;

- (void)dealloc;
- (id)initWithReplyPort:(unsigned int)arg1 portPassing:(_Bool)arg2;

@end
