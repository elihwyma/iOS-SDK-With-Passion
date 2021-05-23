/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface CLSInspector : NSObject

{
    NSArray *_profileClasses;
    NSMutableDictionary *_profileClassesByIdentifier;
    NSArray *_informantClasses;
    NSMutableDictionary *_informantClassesByIdentifier;
    NSMutableDictionary *_informantClassesByFamilyIdentifier;
}

+ (id)sharedInspector;
+ (void)invalidateAllSharedCaches;
+ (void)invalidateSharedPersistentCachesForGeoServiceProviderChange;
+ (void)invalidateSharedPersistentCaches;
+ (void)invalidateSharedTransientCaches;

- (id)init;
- (Class)informantClassForIdentifier:(id)arg1;
- (id)informantClassesForFamilyIdentifier:(id)arg1;
- (id)informantClassesForAnyIdentifier:(id)arg1;
- (id)informantIdentifiersForAnyIdentifier:(id)arg1;
- (id)informantIdentifierForHash:(unsigned long long)arg1;
- (Class)profileClassForIdentifier:(id)arg1;
- (id)profileIdentifierForHash:(unsigned long long)arg1;
- (void)performInvestigation:(id)arg1;
- (void)performInvestigation:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (void)performInvestigation:(id)arg1 options:(unsigned long long)arg2 progressBlock:(CDUnknownBlockType)arg3;

@end
