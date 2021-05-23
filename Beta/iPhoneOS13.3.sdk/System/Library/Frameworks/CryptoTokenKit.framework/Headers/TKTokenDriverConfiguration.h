/*
 Image: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

#import <NSObject.h>

@class NSDictionary, NSString, TKTokenConfigurationProxy;

@interface TKTokenDriverConfiguration : NSObject

{
    TKTokenConfigurationProxy *_proxy;
    NSString *_classID;
}

@property (nonatomic, readonly) NSString *classID;
@property (copy, nonatomic, readonly) NSDictionary *tokenConfigurations;

+ (id)configurationServer;
+ (void)setConfigurationServer:(id)arg1;
+ (id)driverConfigurations;

- (id)beginTransaction;
- (id)initWithClassID:(id)arg1 proxy:(id)arg2;
- (id)createTokenConfigurationWithInstanceID:(id)arg1 persistent:(_Bool)arg2;
- (id)addTokenConfigurationForTokenInstanceID:(id)arg1;
- (void)removeTokenConfigurationForTokenInstanceID:(id)arg1;

@end
