/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <GeoServices/GEONavdPeer.h>

@class GEOApplicationAuditToken, NSString;

__attribute__((visibility("hidden")))
@interface MNNavigationServicePeer : GEONavdPeer

{
    NSString *_peerIdentifier;
    int _processIdentifier;
    GEOApplicationAuditToken *_auditToken;
}

@property (nonatomic, readonly) NSString *peerIdentifier;
@property (nonatomic, readonly) int processIdentifier;
@property (nonatomic, readonly) GEOApplicationAuditToken *auditToken;

+ (const char *)logCategory;
+ (id)peerForConnection:(id)arg1;

- (void)dealloc;
- (const char *)logCategory;
- (id)initWithConnection:(id)arg1 peerIdentifier:(id)arg2 processIdentifier:(int)arg3;
- (void)clearConnectionHandlers;

@end
