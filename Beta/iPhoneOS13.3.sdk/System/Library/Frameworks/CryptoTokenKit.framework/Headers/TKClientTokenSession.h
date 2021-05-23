/*
 Image: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

#import <NSObject.h>

@class LAContext, NSArray, NSDictionary, NSNumber, NSString, TKClientToken;

@interface TKClientTokenSession : NSObject

{
    long long _connectionIdentifier;
    NSArray *_advertisedItems;
    _Bool _authenticateWhenNeeded;
    _Bool __testing_AuthenticateInternally;
    LAContext *_LAContext;
    NSDictionary *_parameters;
    TKClientToken *_token;
    NSString *_slotName;
    NSNumber *_sessionID;
}

@property (nonatomic, readonly) NSNumber *sessionID;
@property (nonatomic, readonly) LAContext *LAContext;
@property (nonatomic, readonly) NSDictionary *parameters;
@property (nonatomic, readonly) TKClientToken *token;
@property (nonatomic) _Bool authenticateWhenNeeded;
@property (nonatomic, readonly) NSArray *keys;
@property (nonatomic, readonly) NSArray *certificates;
@property (nonatomic, readonly) NSArray *identities;
@property (nonatomic, readonly) NSString *slotName;
@property (nonatomic) _Bool _testing_AuthenticateInternally;

- (void)dealloc;
- (void)terminate;
- (_Bool)evaluateAccessControl:(id)arg1 forOperation:(id)arg2 error:(id *)arg3;
- (id)createObjectWithAttributes:(id)arg1 error:(id *)arg2;
- (_Bool)deleteObject:(id)arg1 error:(id *)arg2;
- (id)initWithToken:(id)arg1 LAContext:(id)arg2 parameters:(id)arg3 error:(id *)arg4;
- (id)objectForObjectID:(id)arg1 error:(id *)arg2;
- (id)withError:(id *)arg1 accessControl:(struct __SecAccessControl *)arg2 invoke:(CDUnknownBlockType)arg3;
- (_Bool)ensureSessionWithClient:(id)arg1 connectionIdentifier:(long long)arg2 error:(id *)arg3;
- (id)advertisedItems;
- (id)itemsOfClass:(id)arg1;
- (id)initWithTokenID:(id)arg1 LAContext:(id)arg2 error:(id *)arg3;

@end
