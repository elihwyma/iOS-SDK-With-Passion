/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class ACAccount, NSString;

__attribute__((visibility("hidden")))
@interface SKUIJSAppleAccount : NSObject

{
    ACAccount *_account;
    ACAccount *_nativeAccount;
}

@property (readonly) ACAccount *nativeAccount;
@property (nonatomic, readonly) NSString *accountDescription;
@property (nonatomic, readonly) NSString *DSID;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *username;

- (id)initWithACAccount:(id)arg1;

@end
