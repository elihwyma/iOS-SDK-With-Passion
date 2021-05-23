/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <Foundation/NSObject.h>

#import <MetalTools/Swift-Protocol.h>

@class MTLDebugHeap, NSString;

@protocol MTLHeap;

@interface MTLDebugResource : NSObject <Swift>

{
    id _baseObject;
    id _parent;
    MTLDebugHeap *_heap;
    _Bool _hasTrackedMakeAliasable;
}

@property (readonly) id baseObject;
@property (readonly) id <MTLHeap> heap;
@property _Bool hasTrackedMakeAliasable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)doesAliasAllResources:(const id *)arg1 count:(unsigned long long)arg2;
- (_Bool)doesAliasAnyResources:(const id *)arg1 count:(unsigned long long)arg2;
- (_Bool)doesAliasResource:(id)arg1;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2 heap:(id)arg3;

@end
