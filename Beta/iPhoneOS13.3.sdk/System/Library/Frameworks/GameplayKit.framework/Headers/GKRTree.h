/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <Foundation/NSObject.h>

@interface GKRTree : NSObject

{
    struct GKCRTree<NSObject, float __attribute__((ext_vector_type(2)))> *_cRTree;
    unsigned long long _queryReserve;
}

@property unsigned long long queryReserve;

+ (id)treeWithMaxNumberOfChildren:(unsigned long long)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithMaxNumberOfChildren:(unsigned long long)arg1;
- (void)addElement:(id)arg1 boundingRectMin:(long long)arg2 boundingRectMax:splitStrategy: /* Error: Ran out of types for this method. */;
- (void)removeElement:(id)arg1 boundingRectMin:boundingRectMax: /* Error: Ran out of types for this method. */;
- (id)elementsInBoundingRectMin:rectMax: /* Error: Ran out of types for this method. */;

@end
