/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSMutableArray, NSString, geo_isolater;

@interface GEOResourceManifestUpdateAssertionRegistry : NSObject

{
    geo_isolater *_isolation;
    NSMutableArray *_assertions;
    unsigned long long _stateCaptureHandle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedRegistry;

- (id)init;
- (void)dealloc;
- (void)removeAssertion:(id)arg1;
- (id)captureStatePlistWithHints:(struct os_state_hints_s *)arg1;
- (_Bool)hasActiveAssertions;
- (id)activeAssertionsDescription;
- (id)addAssertionForProcess:(id)arg1 reason:(id)arg2 creationTimestamp:(double)arg3;
- (id)addInternalAssertionForReason:(id)arg1;

@end
