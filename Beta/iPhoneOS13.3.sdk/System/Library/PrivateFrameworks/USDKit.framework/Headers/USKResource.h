/*
 Image: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
 */

#import <Foundation/NSObject.h>

@interface USKResource : NSObject

{
    struct shared_ptr<pxrInternal_v0_19__pxrReserved__usdkit__::ArAsset> _asset;
    struct shared_ptr<const char> _buffer;
    long long _length;
}

+ (id)resourceWithPath:(id)arg1;
+ (id)resourceWithURL:(id)arg1;
+ (id)resourceWithUSKScene:(id)arg1 path:(id)arg2;
+ (id)resourceWithResourcePath:(id)arg1;

- (void)dealloc;
- (id).cxx_construct;
- (id)dataNoCopy;

@end
