/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCListener, NSXPCListenerEndpoint;

@interface ATXActionPredictionServer : NSObject

{
    NSXPCListener *_listener;
    _Bool _checkEntitlements;
}

@property (nonatomic, readonly) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)getActionPredictionsForCandidateBundleIdentifiers:(id)arg1 candidateActionTypes:(id)arg2 consumerType:(unsigned long long)arg3 consumerSubType:(unsigned char)arg4 limit:(int)arg5 reply:(CDUnknownBlockType)arg6;
- (void)shouldDisplayDailyRoutineForContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getActionPredictionsForContext:(id)arg1 includeBundleIds:(id)arg2 excludeBundleIds:(id)arg3 includeActionTypes:(id)arg4 excludeActionTypes:(id)arg5 limit:(unsigned long long)arg6 reply:(CDUnknownBlockType)arg7;
- (void)sendFeedbackWithResponse:(id)arg1;
- (id)initWithListener:(id)arg1 checkEntitlements:(_Bool)arg2;
- (id)initAnonymousListener;

@end
