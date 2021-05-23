/*
 Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface RPClient : NSObject

{
    NSMutableSet *_assertions;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    NSXPCConnection *_xpcCnx;
    unsigned int _type;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (nonatomic) unsigned int type;

+ (void)primaryAccountSignedIn;
+ (void)primaryAccountSignedOut;

- (id)init;
- (void)invalidate;
- (void)_invalidated;
- (void)_interrupted;
- (void)_ensureXPCStarted;
- (void)getIdentitiesWithFlags:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)activateAssertionWithIdentifier:(id)arg1;
- (void)diagnosticLogControl:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)primaryAccountSignedInWithCompletion:(CDUnknownBlockType)arg1;
- (void)primaryAccountSignedOutWithCompletion:(CDUnknownBlockType)arg1;
- (void)addOrUpdateIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)diagnosticCommand:(id)arg1 params:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)diagnosticShow:(id)arg1 level:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getIdentitiesWithCompletion:(CDUnknownBlockType)arg1;

@end
