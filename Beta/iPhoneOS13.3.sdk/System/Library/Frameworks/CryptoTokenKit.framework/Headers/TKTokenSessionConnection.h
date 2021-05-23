/*
 Image: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

#import <NSObject.h>

@class NSMutableDictionary, NSString, TKTokenConnection;

__attribute__((visibility("hidden")))
@interface TKTokenSessionConnection : NSObject

{
    long long _sessionIDCounter;
    TKTokenConnection *_tokenConnection;
    NSMutableDictionary *_sessions;
    NSMutableDictionary *_initialKeepAlives;
}

@property (nonatomic, readonly) TKTokenConnection *tokenConnection;
@property (nonatomic, readonly) NSMutableDictionary *sessions;
@property (nonatomic, readonly) NSMutableDictionary *initialKeepAlives;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)startSessionWithLAContext:(id)arg1 parameters:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)session:(id)arg1 getAdvertisedItemsWithReply:(CDUnknownBlockType)arg2;
- (void)session:(id)arg1 evaluateAccessControl:(id)arg2 forOperation:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)session:(id)arg1 getAttributesOfObjectID:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)session:(id)arg1 objectID:(id)arg2 operation:(long long)arg3 data:(id)arg4 algorithms:(id)arg5 parameters:(id)arg6 reply:(CDUnknownBlockType)arg7;
- (void)session:(id)arg1 createObjectWithAttributes:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)session:(id)arg1 deleteObjectWithObjectID:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)endSession:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)withSessionID:(id)arg1 invoke:(CDUnknownBlockType)arg2;
- (id)initWithTokenConnection:(id)arg1;

@end
