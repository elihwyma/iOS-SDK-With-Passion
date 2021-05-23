/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <ProactiveSupport/_PASZonedObject.h>

@class _PASLock;

@interface _PASInternPool : _PASZonedObject

{
    _PASLock *_lock;
    CDUnknownBlockType _copyWithZone;
}

- (id)init;
- (void)clear;
- (id)initWithBehavior:(unsigned long long)arg1 copyWithZone:(CDUnknownBlockType)arg2;
- (id)intern:(id)arg1;
- (id)internNoCopy:(id)arg1;
- (id)_intern:(id)arg1 copyInput:(_Bool)arg2;
- (_Bool)isInterned:(id)arg1;

@end
