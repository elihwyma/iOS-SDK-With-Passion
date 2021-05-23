/*
 Image: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
 */

#import <Foundation/NSObject.h>

@interface USKPropertyIterator : NSObject

{
    vector_8221fbb7 _properties;
    struct __wrap_iter<pxrInternal_v0_19__pxrReserved__usdkit__::UsdProperty *> {
        struct UsdProperty *__i;
    } _it;
}

- (id)nextObject;
- (id).cxx_construct;
- (id)initWithProperties:(const vector_8221fbb7 *)arg1;

@end
