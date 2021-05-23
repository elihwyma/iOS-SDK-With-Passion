/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSArray, NSString, PRContactWhitelist, PRSharingSession;

@protocol OS_dispatch_queue;

@interface CURangingSession : NSObject

{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    _Bool _peersChanged;
    NSArray *_peersRanging;
    PRContactWhitelist *_prResponder;
    int _prRangingInitiated;
    PRSharingSession *_prRangingSession;
    struct LogCategory *_ucat;
    unsigned int _flags;
    unsigned int _statusFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    CDUnknownBlockType _measurementHandler;
    CDUnknownBlockType _measurementHandlerEx;
    NSArray *_peers;
    CDUnknownBlockType _statusChangedHandler;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType errorHandler;
@property (nonatomic) unsigned int flags;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) CDUnknownBlockType measurementHandler;
@property (copy, nonatomic) CDUnknownBlockType measurementHandlerEx;
@property (copy, nonatomic) NSArray *peers;
@property (copy, nonatomic) CDUnknownBlockType statusChangedHandler;
@property (nonatomic, readonly) unsigned int statusFlags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_invalidate;
- (void)_update;
- (void)_invalidated;
- (void)activate;
- (void)addSample:(id)arg1;
- (void)session:(id)arg1 didChangeProximitySensorState:(unsigned long long)arg2;
- (void)session:(id)arg1 didEstimateScores:(id)arg2;
- (void)session:(id)arg1 didFailwithError:(id)arg2;
- (void)_updateInitiator;
- (void)_updateResponder;
- (void)_updatePeers;

@end
