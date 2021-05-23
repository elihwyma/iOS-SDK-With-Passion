/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface _PFMulticasterReceiverList : NSObject

{
    id _inlineReceivers[12];
    NSMutableArray *_extraReceivers;
    SEL _selector;
    unsigned long long _count;
}

@property (readonly) SEL selector;
@property (readonly) unsigned long long count;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithSelector:(SEL)arg1 receivers:(id)arg2;
- (id)initWithSelector:(SEL)arg1 receiversHash:(id)arg2;
- (_Bool)hasReceivers;
- (void)enumerateReceiversWithBlock:(CDUnknownBlockType)arg1;

@end
