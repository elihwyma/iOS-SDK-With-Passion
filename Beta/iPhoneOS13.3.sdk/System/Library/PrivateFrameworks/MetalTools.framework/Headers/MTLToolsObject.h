/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <Foundation/NSObject.h>

@class MTLToolsDevice, MTLToolsPointerArray;

@protocol MTLDevice;

@interface MTLToolsObject : NSObject

{
    MTLToolsObject *_parent;
    MTLToolsPointerArray *_tracker;
    MTLToolsObject *_baseObject;
    MTLToolsDevice *_device;
    struct ILayerLockingPolicy *_lockingPolicy;
}

@property (nonatomic) struct ILayerLockingPolicy *lockingPolicy;
@property (nonatomic) MTLToolsPointerArray *tracker;
@property (retain, nonatomic) id baseObject;
@property (nonatomic, readonly) id <MTLDevice> device;

+ (id)dispatchQueue;
+ (void)visitObjects:(id)arg1 withVisitor:(id)arg2;

- (void)dealloc;
- (id)description;
- (id)parent;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (void)acceptVisitor:(id)arg1;
- (id)originalObject;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2 lockingPolicy:(struct ILayerLockingPolicy *)arg3;
- (id)baseObjectWithClass:(Class)arg1;
- (void)setOriginalObject:(id)arg1;
- (id)strongParent;

@end
