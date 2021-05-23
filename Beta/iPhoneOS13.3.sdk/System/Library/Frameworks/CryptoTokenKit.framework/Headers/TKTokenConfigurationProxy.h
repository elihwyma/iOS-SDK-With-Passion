/*
 Image: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

#import <NSObject.h>

@protocol NSXPCProxyCreating;

__attribute__((visibility("hidden")))
@interface TKTokenConfigurationProxy : NSObject

{
    id <NSXPCProxyCreating> _proxyCreator;
}

@property (nonatomic, readonly) id <NSXPCProxyCreating> proxyCreator;

- (id)initWithProxyCreator:(id)arg1;
- (id)configurationProtocol;

@end
