/*
 Image: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

#import <NSObject.h>

@class TKTokenConfiguration, TKTokenDriver, TKTokenID, TKTokenKeychainContents;

@protocol TKTokenDelegate;

@interface TKToken : NSObject

{
    TKTokenDriver *_tokenDriver;
    id <TKTokenDelegate> _delegate;
    TKTokenConfiguration *_configuration;
    TKTokenKeychainContents *_keychainContents;
    TKTokenID *_tokenID;
}

@property (retain) TKTokenKeychainContents *keychainContents;
@property (readonly) TKTokenID *tokenID;
@property (readonly) TKTokenDriver *tokenDriver;
@property (weak) id <TKTokenDelegate> delegate;
@property (readonly) TKTokenConfiguration *configuration;

- (id)description;
- (void)terminate;
- (id)initWithTokenDriver:(id)arg1 instanceID:(id)arg2;

@end
