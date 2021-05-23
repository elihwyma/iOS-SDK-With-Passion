/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOTileRequestBalancer : NSObject

{
    void *_requesters;
    void *_randomIndexGenerator;
    unsigned long long _maxRunningOperationsCount;
    unsigned long long _stateCaptureHandle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)balancerForRequester:(id)arg1 tileKeys:(id)arg2 priorities:(id)arg3;
+ (unsigned long long)maxRunningOperationsCount;
+ (void)setMaxRunningOperationsCount:(unsigned long long)arg1;

- (id)init;
- (void)dealloc;
- (void)requester:(id)arg1 updateRunningOperationsCount:(unsigned long long)arg2;
- (void)removeRequester:(id)arg1;
- (void)requester:(id)arg1 removeTileKey:(const struct _GEOTileKey *)arg2;
- (void)requester:(id)arg1 updatePriority:(unsigned int)arg2 tileKey:(const struct _GEOTileKey *)arg3;
- (id)captureStatePlistWithHints:(struct os_state_hints_s *)arg1;
- (id)_initWithMaxRunningOperationsCount:(unsigned long long)arg1;
- (void)_addRequester:(id)arg1 tileKeys:(id)arg2 priorities:(id)arg3;
- (vector_49336e52 *)requesters;
- (void)_startOperations;
- (void)_removeRequester:(id)arg1;
- (void)_requester:(id)arg1 updateRunningOperationsCount:(unsigned long long)arg2;
- (void)_requester:(id)arg1 updatePriority:(unsigned int)arg2 tileKey:(struct _GEOTileKey)arg3;
- (void)_requester:(id)arg1 removeTileKey:(struct _GEOTileKey)arg2;
- (void)_pruneEmptyRequesters;
- (void)_startOperationsWithAvailableCount:(unsigned long long)arg1;
- (__wrap_iter_9a08789a)_next_requester;
- (void)_requester:(id)arg1 incrementRunningOperationsCount:(unsigned long long)arg2;

@end
