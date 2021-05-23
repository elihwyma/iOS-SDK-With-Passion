/*
 Image: /System/Library/PrivateFrameworks/AdPlatformsInternal.framework/AdPlatformsInternal
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString, NSXPCConnection;

@interface ADAttributionRequester : NSObject

{
    NSXPCConnection *_connection;
    NSNumber *_transactionToken;
    NSString *_bundleID;
}

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSNumber *transactionToken;

- (void)requestAttributionDetailsWithBlock:(CDUnknownBlockType)arg1;
- (void)setStocksAdEnabled:(_Bool)arg1;
- (id)initWithConnection:(id)arg1 bundleID:(id)arg2 transactionID:(id)arg3;
- (int)appRunState;
- (void)overrideAttributionData:(id)arg1;
- (_Bool)productionClient;
- (void)makeAttributionRequestWithObject:(id)arg1 andHandler:(CDUnknownBlockType)arg2;
- (void)attachSearchMetadataTo:(id)arg1 forAdamID:(id)arg2;
- (void)attachDownloadDataTo:(id)arg1 forAdamID:(id)arg2;
- (void)requestAttributionDetails:(CDUnknownBlockType)arg1;
- (void)beginAttributionRequest:(id)arg1 reason:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
