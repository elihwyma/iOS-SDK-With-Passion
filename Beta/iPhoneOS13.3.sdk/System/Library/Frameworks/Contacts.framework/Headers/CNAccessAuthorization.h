/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class CNFAccessAuthorization;

@interface CNAccessAuthorization : NSObject

{
    CNFAccessAuthorization *_authorizer;
}

@property (retain, nonatomic) CNFAccessAuthorization *authorizer;

+ (id)new;
+ (id)allAuthorizationKeys;

- (id)init;
- (id)initWithAuditToken:(CDStruct_6ad76789)arg1;
- (id)authorizedKeysForContactKeys:(id)arg1;
- (id)initWithAuthorizer:(id)arg1;
- (_Bool)authorizeFetchRequest:(id)arg1 accessError:(id *)arg2;
- (void)removeUnauthorizedKeysFromFetchRequest:(id)arg1;
- (void)performWork:(CDUnknownBlockType)arg1 authorizingFetchRequest:(id)arg2 failureHandler:(CDUnknownBlockType)arg3;

@end
