/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSMutableDictionary, NSSet, NSString;

@interface PPSettingsGuardedData : NSObject

{
    double _cachedWeightMultiplier;
    NSSet *_donationDisabledBundleIdentifiers;
    NSSet *_cloudKitDisabledBundleIdentifiers;
    NSMutableDictionary *_donationDisabledChangeHandlers;
    NSMutableDictionary *_queryPlanLoggingChangeHandlers;
    int _nextChangeHandlerToken;
    _Bool _appConnectionsLocationsEnabled;
    NSDate *_entitiesBackfillTimestamp;
    NSData *_entitiesMappingTrieSha256;
    NSString *_abGroupOverride;
}

@end
