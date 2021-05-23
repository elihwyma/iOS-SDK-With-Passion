/*
 Image: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
 */

#import <Foundation/NSObject.h>

@interface USKNodeSubtreeIterator : NSObject

{
    struct UsdPrimRange _range;
    struct iterator _it;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)nextObject;
- (id).cxx_construct;
- (id)initWithScene:(const TfWeakPtr_db1cbf17 *)arg1;
- (id)initWithPrim:(const struct UsdPrim *)arg1;
- (id)initWithSubtreeRange:(const struct UsdPrimRange *)arg1;

@end
