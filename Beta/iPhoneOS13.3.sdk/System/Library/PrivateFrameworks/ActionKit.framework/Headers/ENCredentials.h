/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

#import <ActionKit/Swift-Protocol.h>

@class NSDate, NSString;

@interface ENCredentials : NSObject <Swift>

{
    NSString *_host;
    NSString *_edamUserId;
    NSString *_noteStoreUrl;
    NSString *_webApiUrlPrefix;
    NSString *_authenticationToken;
    NSDate *_expirationDate;
}

@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *edamUserId;
@property (copy, nonatomic) NSString *noteStoreUrl;
@property (copy, nonatomic) NSString *webApiUrlPrefix;
@property (copy, nonatomic) NSString *authenticationToken;
@property (retain, nonatomic) NSDate *expirationDate;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)saveToKeychain;
- (id)initWithHost:(id)arg1 edamUserId:(id)arg2 noteStoreUrl:(id)arg3 webApiUrlPrefix:(id)arg4 authenticationToken:(id)arg5 expirationDate:(id)arg6;
- (id)initWithHost:(id)arg1 authenticationResult:(id)arg2;
- (void)deleteFromKeychain;
- (_Bool)areValid;
- (id)keychainQuery;

@end
