/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@interface WBSCyclerServiceProxy : NSObject

{
    NSXPCConnection *_xpcConnection;
    CDUnknownBlockType _errorHandler;
}

@property (copy, nonatomic) CDUnknownBlockType connectionInvalidationHandler;
@property (copy, nonatomic) CDUnknownBlockType errorHandler;

- (id)init;
- (void)dealloc;
- (void)setTestTargetEndpoint:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)_cyclerProxy;
- (void)setValue:(id)arg1 forConfigurationKey:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)startCyclingFromBeginning:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;
- (void)stopCyclingWithReply:(CDUnknownBlockType)arg1;
- (void)sendRequestToTestSuite:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)fetchStatusWithReply:(CDUnknownBlockType)arg1;

@end
