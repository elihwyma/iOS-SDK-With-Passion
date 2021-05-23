/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface FPSpotlightCollectorManager : NSObject

{
    _Bool _areMountQueriesEnabled;
    id _providerDomainChangesToken;
    NSSet *_currentMountPoints;
    NSMutableDictionary *_collectorByDescriptor;
}

@property (retain) id providerDomainChangesToken;
@property (retain) NSSet *currentMountPoints;
@property (readonly) NSSet *effectiveCurrentMountPoints;
@property (retain) NSMutableDictionary *collectorByDescriptor;
@property _Bool areMountQueriesEnabled;
@property (nonatomic, readonly) NSArray *collectors;

+ (id)sharedInstance;
+ (id)_mountPointsFromProviderDomains:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)_recursiveDescription;
- (void)suspendCollectors;
- (void)resumeCollectors;
- (void)enableMountPointQueries;
- (void)disableMountPointQueries;
- (void)collectorDidFinish:(id)arg1;
- (id)mountPointsForCollector:(id)arg1;
- (void)registerDataSource:(id)arg1;
- (void)unregisterDataSource:(id)arg1;
- (void)_observeFileProviderDomains;

@end
