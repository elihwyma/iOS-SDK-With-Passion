/*
 Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ACAccountStoreClientSideListener : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedClientSideListener;

- (void)accountCredentialsDidChangeForAccountWithIdentifier:(id)arg1;

@end
