/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <Foundation/NSObject.h>

#import <AuthKit/Swift-Protocol.h>

@class AKAuthorizationRequest, AKAuthorizationScopesUserSelection, AKDevice, NSDictionary, NSString;

@interface AKAuthorizationContext : NSObject <Swift>

{
    NSString *_proxiedAppName;
    NSString *_altDSID;
    NSDictionary *_appProvidedData;
    AKDevice *_companionDevice;
    AKDevice *_proxiedDevice;
    long long _serviceType;
    NSString *_appProvidedContext;
    NSString *_teamID;
    NSString *_clientID;
    AKAuthorizationRequest *_request;
    AKAuthorizationScopesUserSelection *_userSelection;
}

@property (nonatomic, readonly) _Bool _hasApplicationMetaData;
@property (copy, nonatomic) NSString *teamID;
@property (copy, nonatomic) NSString *clientID;
@property (copy, nonatomic, readonly) AKAuthorizationRequest *request;
@property (retain, nonatomic) AKAuthorizationScopesUserSelection *userSelection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *altDSID;
@property (nonatomic) long long serviceType;
@property (copy, nonatomic, setter=_setProxiedAppName:) NSString *_proxiedAppName;
@property (copy, nonatomic) NSDictionary *appProvidedData;
@property (copy, nonatomic) NSString *appProvidedContext;
@property (copy, nonatomic) AKDevice *proxiedDevice;
@property (copy, nonatomic) AKDevice *companionDevice;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequest:(id)arg1;

@end
