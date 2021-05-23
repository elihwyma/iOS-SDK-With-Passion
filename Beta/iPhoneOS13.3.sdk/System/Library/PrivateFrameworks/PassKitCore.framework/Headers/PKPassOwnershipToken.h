/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSString;

@interface PKPassOwnershipToken : NSObject

{
    NSString *_ownershipToken;
    NSString *_ownershipTokenIdentifier;
}

@property (copy, nonatomic, readonly) NSString *ownershipTokenIdentifier;
@property (copy, nonatomic) NSString *ownershipToken;

+ (void)queryKeychainForOwnershipTokens:(CDUnknownBlockType)arg1;
+ (void)deleteAllLocalKeychainOwnershipTokens;

- (id)description;
- (id)initWithIdentifier:(id)arg1;
- (id)_wrapperWithType:(unsigned long long)arg1 identifier:(id)arg2;
- (void)_readFromKeychain;
- (void)_writeToKeychain;
- (void)deleteTokenFromLocalKeychain;
- (id)initWithOwnershipToken:(id)arg1 identifier:(id)arg2;
- (void)deleteTokenFromKeychain;

@end
