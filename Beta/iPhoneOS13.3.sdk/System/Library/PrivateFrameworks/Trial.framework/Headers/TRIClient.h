/*
 Image: /System/Library/PrivateFrameworks/Trial.framework/Trial
 */

#import <Foundation/NSObject.h>

#import <Trial/Swift-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString, TRIDefaultFactorProvider, TRILogger, TRITrackingId;

@interface TRIClient : NSObject <Swift>

{
    NSMutableSet *_updatedNamespaceIds;
    TRIDefaultFactorProvider *_defaultFactorProvider;
    NSMutableDictionary *_namespaceUpdateHandlerTokens;
    int _projectId;
    TRILogger *_trialDevLogger;
    TRITrackingId *_trackingId;
    TRILogger *_logger;
}

@property (readonly) TRITrackingId *trackingId;
@property (readonly) TRILogger *logger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)clientWithIdentifier:(int)arg1;
+ (id)clientWithIdentifier:(int)arg1 unit:(int)arg2;

- (void)dealloc;
- (id)subject;
- (id)addUpdateHandlerForNamespaceId:(unsigned int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)newTrackingId;
- (struct NSString *)experimentIdWithNamespace:(unsigned int)arg1;
- (struct NSString *)treatmentIdWithNamespace:(unsigned int)arg1;
- (id)levelForFactor:(struct NSString *)arg1 withNamespace:(unsigned int)arg2;
- (id)initWithClientIdentifier:(int)arg1 unit:(int)arg2;
- (void)_deregisterUpdateHandlers;
- (id)newTrackingIdWithTreatmentRefresh:(_Bool)arg1;
- (void)_invalidateNamespaces;
- (void)_registerUpdateHandlerForNamespaceId:(unsigned int)arg1;
- (id)addUpdateHandlerForNamespaceId:(unsigned int)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)removeUpdateHandler:(id)arg1;
- (void)_handleNamespaceUpdate:(unsigned int)arg1;

@end
