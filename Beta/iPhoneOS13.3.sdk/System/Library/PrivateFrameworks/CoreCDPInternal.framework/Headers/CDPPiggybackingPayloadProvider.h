/*
 Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

#import <Foundation/NSObject.h>

@class KCJoiningRequestAccountCircleDelegate, KCJoiningRequestCircleSession, NSString;

@interface CDPPiggybackingPayloadProvider : NSObject

{
    KCJoiningRequestCircleSession *_session;
    KCJoiningRequestAccountCircleDelegate *_delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)proxyWithSession:(id)arg1 error:(id *)arg2;

- (_Bool)isComplete;
- (id)initiatingPayload:(id *)arg1;
- (id)processIncomingPayload:(id)arg1 error:(id *)arg2;
- (_Bool)supportsInteractiveAuth;
- (_Bool)requiresInitialSync;

@end
