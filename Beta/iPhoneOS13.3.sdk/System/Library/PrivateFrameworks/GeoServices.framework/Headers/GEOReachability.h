/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSString;

@interface GEOReachability : NSObject

{
    _Bool _networkReachable;
    unsigned long long _errorCount;
    int _symptomsAlternateAdviceToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedReachability;

- (id)init;
- (void)dealloc;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)_reachabilityChanged:(id)arg1;
- (void)_resetErrors;
- (void)reportTileLoadSuccess:(id)arg1;
- (_Bool)anyFailures;
- (void)reportLoadFailure:(id)arg1;
- (_Bool)networkAvailable;

@end
