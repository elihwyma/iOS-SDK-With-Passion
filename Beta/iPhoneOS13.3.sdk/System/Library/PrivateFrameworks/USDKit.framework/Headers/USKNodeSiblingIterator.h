/*
 Image: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
 */

#import <Foundation/NSObject.h>

@interface USKNodeSiblingIterator : NSObject

{
    iterator_range_599edad9 _range;
    struct UsdPrimSiblingIterator _it;
}

- (id)nextObject;
- (id).cxx_construct;
- (id)initWithPrim:(const struct UsdPrim *)arg1;
- (id)initWithSiblingRange:(const iterator_range_599edad9 *)arg1;

@end
