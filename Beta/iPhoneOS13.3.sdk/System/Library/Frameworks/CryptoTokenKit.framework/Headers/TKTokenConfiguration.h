/*
 Image: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

#import <NSObject.h>

@class NSArray, NSData, NSString, TKTokenConfigurationProxy, TKTokenID;

@interface TKTokenConfiguration : NSObject

{
    TKTokenConfigurationProxy *_proxy;
    NSArray *_keychainItems;
    TKTokenID *_tokenID;
}

@property (nonatomic, readonly) TKTokenID *tokenID;
@property (nonatomic, readonly) NSString *instanceID;
@property (copy, nonatomic) NSData *configurationData;
@property (copy, nonatomic) NSArray *keychainItems;

+ (id)interfaceForProtocol;

- (id)beginTransaction;
- (id)keyForObjectID:(id)arg1 error:(id *)arg2;
- (id)initWithTokenID:(id)arg1 proxy:(id)arg2;
- (id)certificateForObjectID:(id)arg1 error:(id *)arg2;

@end
