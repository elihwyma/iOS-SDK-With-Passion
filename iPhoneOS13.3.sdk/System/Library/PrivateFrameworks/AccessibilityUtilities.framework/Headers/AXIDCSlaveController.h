//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccessibilityUtilities/AXIDCRemoteController.h>


@class AXDispatchTimer, NSString;

@interface AXIDCSlaveController : AXIDCRemoteController <NSNetServiceDelegate>
{
    AXDispatchTimer *_resolveTimer;
    struct __CFSocket _ipv4socket;
    struct __CFSocket _ipv6socket;
    BOOL _isVisible;
    double _searchTimeout;
    id /* CDUnknownBlockType */ _searchCompletion;
    NSString *_serviceType;
}

@property(retain, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) id /* CDUnknownBlockType */ searchCompletion; // @synthesize searchCompletion=_searchCompletion;
@property(nonatomic) double searchTimeout; // @synthesize searchTimeout=_searchTimeout;
// - (void).cxx_destruct;
- (void)netServiceDidStop:(id)arg1;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (void)netServiceDidPublish:(id)arg1;
- (void)netServiceWillPublish:(id)arg1;
- (BOOL)isSlave;
- (void)resetConnection;
- (void)closeConnectionWithError:(id)arg1;
- (void)receivedData:(id)arg1;
- (void)acceptConnection:(int)arg1;
- (void)resolveMasterWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (BOOL)shouldAcceptConnection;
- (BOOL)setVisible:(BOOL)arg1;
- (BOOL)isVisible;
- (BOOL)initialize;
- (void)dealloc;
- (id)initWithServiceType:(id)arg1;

@end
