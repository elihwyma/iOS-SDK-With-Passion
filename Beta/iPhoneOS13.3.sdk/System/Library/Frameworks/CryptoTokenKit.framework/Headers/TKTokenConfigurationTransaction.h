/*
 Image: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

#import <NSObject.h>

@class TKTokenConfigurationProxy;

@interface TKTokenConfigurationTransaction : NSObject

{
    TKTokenConfigurationProxy *_proxy;
}

- (void)dealloc;
- (void)commit;
- (id)initWithProxy:(id)arg1;

@end
