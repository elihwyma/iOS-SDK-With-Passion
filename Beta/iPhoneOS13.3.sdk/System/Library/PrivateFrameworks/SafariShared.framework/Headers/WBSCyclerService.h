/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCListener, WBSCyclerTestRunner, WBSCyclerTestTargetProxyController;

@protocol WBSCyclerTestSuite;

@interface WBSCyclerService : NSObject

{
    NSXPCListener *_xpcListener;
    WBSCyclerTestTargetProxyController *_testTargetProxyController;
    Class _testSuiteClass;
    id <WBSCyclerTestSuite> _testSuite;
    WBSCyclerTestRunner *_testRunner;
    NSString *_identifier;
}

@property (copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)_descriptionForErrorCode:(long long)arg1;
- (id)_errorWithCode:(long long)arg1;
- (void)setTestTargetEndpoint:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_postFinishNotificationWithError:(id)arg1;
- (void)_setTestSuiteName:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_setSeed:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (id)_startCyclingFromBeginning:(_Bool)arg1;
- (void)setValue:(id)arg1 forConfigurationKey:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)startCyclingFromBeginning:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;
- (void)stopCyclingWithReply:(CDUnknownBlockType)arg1;
- (void)sendRequestToTestSuite:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)fetchStatusWithReply:(CDUnknownBlockType)arg1;

@end
