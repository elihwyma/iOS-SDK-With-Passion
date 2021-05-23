/*
 Image: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

#import <NSObject.h>

@class NSNumber, NSString, NSXPCConnection, NSXPCListenerEndpoint;

@interface TKClientToken : NSObject

{
    NSXPCListenerEndpoint *_serverEndpoint;
    NSXPCConnection *_serverConnection;
    _Bool _namedConnection;
    NSNumber *_targetUID;
    long long _connectionIdentifier;
    NSString *_tokenID;
    NSXPCConnection *_tokenConnection;
}

@property (nonatomic, readonly) NSXPCConnection *serverConnection;
@property (nonatomic, readonly) NSXPCConnection *tokenConnection;
@property (nonatomic, readonly) NSString *tokenID;
@property (nonatomic, readonly) NSXPCListenerEndpoint *endpoint;
@property (nonatomic, readonly) NSXPCListenerEndpoint *configurationEndpoint;

- (void)dealloc;
- (id)initWithTokenID:(id)arg1;
- (id)initWithTokenID:(id)arg1 serverEndpoint:(id)arg2 targetUID:(id)arg3;
- (_Bool)connectWithError:(id *)arg1;
- (id)sessionWithLAContext:(id)arg1 error:(id *)arg2;
- (id)withError:(id *)arg1 invoke:(CDUnknownBlockType)arg2;

@end
