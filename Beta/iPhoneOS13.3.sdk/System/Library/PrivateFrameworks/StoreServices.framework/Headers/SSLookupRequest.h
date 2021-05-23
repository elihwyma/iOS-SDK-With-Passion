/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSRequest.h>

@class NSString, SSAuthenticationContext, SSLookupProperties;

@interface SSLookupRequest : SSRequest

{
    SSAuthenticationContext *_authenticationContext;
    long long _personalizationStyle;
    SSLookupProperties *_properties;
    long long _resultFilters;
}

@property (copy, nonatomic, readonly) SSLookupProperties *_lookupProperties;
@property (copy, nonatomic) NSString *keyProfile;
@property (nonatomic) long long localizationStyle;
@property (copy, nonatomic) SSAuthenticationContext *authenticationContext;
@property (nonatomic) _Bool authenticatesIfNeeded;
@property (nonatomic) long long personalizationStyle;
@property (nonatomic) long long resultFilters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)start;
- (id)initWithLocation:(id)arg1;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setValue:(id)arg1 forRequestParameter:(id)arg2;
- (void)startWithLookupBlock:(CDUnknownBlockType)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)valueForRequestParameter:(id)arg1;
- (void)_setTimeoutInterval:(id)arg1;

@end
