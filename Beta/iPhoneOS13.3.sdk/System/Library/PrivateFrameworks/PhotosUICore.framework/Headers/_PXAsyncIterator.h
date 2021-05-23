/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _PXAsyncIterator : NSObject

{
    unsigned long long _index;
    unsigned long long _count;
    CDUnknownBlockType _handler;
    CDUnknownBlockType _completion;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType handler;
@property (copy, nonatomic) CDUnknownBlockType completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long index;
@property (nonatomic, readonly) unsigned long long count;

- (id)init;
- (void)stop;
- (void)next;
- (id)initWithCount:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_executeNextRun;

@end
