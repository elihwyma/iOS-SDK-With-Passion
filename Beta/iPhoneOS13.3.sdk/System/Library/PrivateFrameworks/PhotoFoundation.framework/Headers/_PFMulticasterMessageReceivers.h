/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <Foundation/NSObject.h>

@class _PFMulticasterReceiverList;

@interface _PFMulticasterMessageReceivers : NSObject

{
    _PFMulticasterReceiverList *_strongReceivers;
    _PFMulticasterReceiverList *_weakReceivers;
}

- (unsigned long long)count;
- (void)enumerateReceiversWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithStrongReceivers:(id)arg1 weakReceivers:(id)arg2;

@end
