/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class NSMutableIndexSet, NSString;

__attribute__((visibility("hidden")))
@interface _MFPersistedMessageForwardingIterator : NSObject

{
    _Atomic _Bool _cancelled;
    CDUnknownBlockType _handler;
    NSMutableIndexSet *_messageSet;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType handler;
@property (nonatomic, readonly) NSMutableIndexSet *messageSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (void)flush;
- (id)initWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)handleMessage:(id)arg1;

@end
