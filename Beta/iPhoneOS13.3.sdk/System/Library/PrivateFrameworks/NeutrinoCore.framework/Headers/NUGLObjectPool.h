/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NSHashTable;

@protocol OS_dispatch_queue;

@interface NUGLObjectPool : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    struct map<unsigned int, std::__1::stack<unsigned int, std::__1::deque<unsigned int, std::__1::allocator<unsigned int>>>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, std::__1::stack<unsigned int, std::__1::deque<unsigned int, std::__1::allocator<unsigned int>>>>>> _objects;
    NSHashTable *_contexts;
}

@property (readonly) _Bool isUsed;
@property (readonly) long long objectCount;

- (id)init;
- (void)dealloc;
- (id)description;
- (id).cxx_construct;
- (id)initWithContext:(id)arg1;
- (long long)useCount;
- (long long)_useCount;
- (void)shareWithContext:(id)arg1;
- (void)_shareWithContext:(id)arg1;
- (_Bool)isUsedByContext:(id)arg1;
- (_Bool)_isUsedByContext:(id)arg1;
- (void)pushObject:(unsigned int)arg1 ofType:(unsigned int)arg2;
- (unsigned int)popObjectOfType:(unsigned int)arg1;
- (void)_pushObject:(unsigned int)arg1 ofType:(unsigned int)arg2;
- (unsigned int)_popObjectOfType:(unsigned int)arg1;
- (long long)_objectCount;

@end
