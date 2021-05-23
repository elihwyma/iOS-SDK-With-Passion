/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Foundation/NSObject.h>

@class CATRemoteConnection;

@interface CATRemoteConnectionTrustDecision : NSObject

{
    CATRemoteConnection *mConnection;
    _Atomic _Bool mHasResponded;
    id _trust;
}

@property (readonly) id trust;

- (void)dealloc;
- (id)initWithConnection:(id)arg1 trust:(struct __SecTrust *)arg2;
- (void)respondWithDecisionToAllowUntrustedConnection:(_Bool)arg1;

@end
