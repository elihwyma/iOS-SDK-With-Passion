/*
 Image: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

#import <NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString, TKSharedResourceSlot, TKTokenDriverContext;

@protocol TKTokenDriverDelegate;

@interface TKTokenDriver : NSObject

{
    id _keepAlive;
    id <TKTokenDriverDelegate> _delegate;
    TKTokenDriverContext *_context;
    NSMutableDictionary *_tokenConnections;
    TKSharedResourceSlot *_keepAliveResourceSlot;
    NSDictionary *_extensionAttributes;
}

@property (weak, nonatomic) TKTokenDriverContext *context;
@property (nonatomic, readonly) NSMutableDictionary *tokenConnections;
@property (retain, nonatomic) id keepAlive;
@property (retain, nonatomic) TKSharedResourceSlot *keepAliveResourceSlot;
@property (readonly) NSString *classID;
@property (retain) NSDictionary *extensionAttributes;
@property (weak) id <TKTokenDriverDelegate> delegate;

+ (id)createDriver;

- (id)init;
- (void)dealloc;
- (void)terminate;
- (id)endpointForToken:(id)arg1;
- (void)getTokenWithAttributes:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)createTokenWithSlot:(id)arg1 AID:(id)arg2 error:(id *)arg3;
- (void)auditAuthOperation:(id)arg1 auditToken:(CDStruct_6ad76789)arg2 success:(_Bool)arg3;
- (void)acquireTokenWithInstanceID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)acquireTokenWithSlot:(id)arg1 AID:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)releaseTokenWithInstanceID:(id)arg1;
- (void)configureWithReply:(CDUnknownBlockType)arg1;

@end
