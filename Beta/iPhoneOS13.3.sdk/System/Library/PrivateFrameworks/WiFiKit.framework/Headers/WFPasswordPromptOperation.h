/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <WiFiKit/WFUserPromptOperation.h>

#import <WiFiKit/Swift-Protocol.h>

@class NSString;

@protocol WFCredentialsProviderContext;

@interface WFPasswordPromptOperation : WFUserPromptOperation <Swift>

{
    NSString *password;
    struct __SecIdentity *TLSIdentity;
    NSString *username;
    id <WFCredentialsProviderContext> _credentialsProviderContext;
}

@property (retain, nonatomic) id <WFCredentialsProviderContext> credentialsProviderContext;
@property (copy, nonatomic) NSString *password;
@property (nonatomic, readonly) _Bool wantsModalPresentation;
@property (nonatomic, readonly) struct __SecIdentity *TLSIdentity;
@property (copy, nonatomic, readonly) NSString *username;

+ (id)passwordPromptOperationWithCredentialsContext:(id)arg1;

@end
