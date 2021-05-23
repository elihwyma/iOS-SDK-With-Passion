/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSDictionary, NSHTTPURLResponse, NSNumber, NSString;

@interface SSAuthenticationResponse : NSObject

{
    NSDictionary *_responseDictionary;
    long long _urlBagType;
    NSHTTPURLResponse *_urlResponse;
}

@property long long URLBagType;
@property (readonly) NSDictionary *responseDictionary;
@property (readonly) NSHTTPURLResponse *URLResponse;
@property (readonly) NSString *accountName;
@property (readonly) long long accountKind;
@property (readonly) NSNumber *accountUniqueIdentifier;
@property (readonly) long long availableServiceTypes;
@property (readonly) NSString *creditsString;
@property (readonly) long long enabledServiceTypes;
@property (readonly, getter=isManagedStudent) _Bool managedStudent;
@property (readonly, getter=isNewCustomer) _Bool newCustomer;
@property (readonly) NSString *storeFrontIdentifier;
@property (readonly) NSString *token;
@property (readonly) NSNumber *failureType;
@property (readonly) long long responseType;
@property (readonly) NSString *userMessage;

- (id)altDSID;
- (id)initWithURLResponse:(id)arg1 dictionary:(id)arg2;
- (id)newAccount;
- (id)_valueForFirstAvailableKey:(id)arg1;
- (long long)_responseTypeForFailureType:(long long)arg1;
- (long long)_responseTypeForErrorNumber:(long long)arg1;
- (long long)_responseTypeForStatusValue:(long long)arg1;

@end
