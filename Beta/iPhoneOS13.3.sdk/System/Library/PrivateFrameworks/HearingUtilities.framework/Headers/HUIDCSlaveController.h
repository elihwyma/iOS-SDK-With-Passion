/*
 Image: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
 */

#import <HearingUtilities/HUIDCRemoteController.h>

@class AXDispatchTimer, NSString;

@interface HUIDCSlaveController : HUIDCRemoteController

{
    AXDispatchTimer *_resolveTimer;
    struct __CFSocket *_ipv4socket;
    struct __CFSocket *_ipv6socket;
    _Bool _isVisible;
    double _searchTimeout;
    CDUnknownBlockType _searchCompletion;
    NSString *_serviceType;
}

@property (copy, nonatomic) CDUnknownBlockType searchCompletion;
@property (retain, nonatomic) NSString *serviceType;
@property (nonatomic) double searchTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)initialize;
- (_Bool)setVisible:(_Bool)arg1;
- (_Bool)isVisible;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (void)netServiceDidStop:(id)arg1;
- (void)netServiceWillPublish:(id)arg1;
- (void)netServiceDidPublish:(id)arg1;
- (void)receivedData:(id)arg1;
- (id)initWithServiceType:(id)arg1;
- (void)closeConnectionWithError:(id)arg1;
- (void)resolveMasterWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isSlave;
- (_Bool)shouldAcceptConnection;
- (void)acceptConnection:(int)arg1;
- (void)resetConnection;

@end
