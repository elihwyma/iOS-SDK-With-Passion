/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <FrontBoardServices/FBSSceneAction.h>

@class BSSettings, FBSSceneSnapshotRequestHandle, NSMutableArray, NSString;

@interface FBSSceneSnapshotAction : FBSSceneAction

{
    NSMutableArray *_requests;
    CDUnknownBlockType _requestHandler;
    CDUnknownBlockType _completionHandler;
    FBSSceneSnapshotRequestHandle *_outgoingRequestHandle;
    int _expired;
    BSSettings *_clientExtendedData;
}

@property (copy, nonatomic) CDUnknownBlockType requestHandler;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (readonly, getter=isExpired) _Bool expired;
@property (nonatomic, readonly) double expirationInterval;
@property (copy, nonatomic) BSSettings *clientExtendedData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setInvalidationHandler:(CDUnknownBlockType)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (Class)fallbackXPCEncodableClass;
- (id)initWithXPCDictionary:(id)arg1;
- (void)executeRequestsWithHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2 expirationHandler:(CDUnknownBlockType)arg3;
- (_Bool)snapshotRequestAllowSnapshot:(id)arg1;
- (_Bool)snapshotRequest:(id)arg1 performWithContext:(id)arg2;
- (void)setExpired:(_Bool)arg1;
- (void)_executeNextRequest;
- (_Bool)_remainsActionable;
- (void)_finishAllRequests;
- (id)initWithRequests:(id)arg1 expirationInterval:(double)arg2 responseHandler:(CDUnknownBlockType)arg3;

@end
