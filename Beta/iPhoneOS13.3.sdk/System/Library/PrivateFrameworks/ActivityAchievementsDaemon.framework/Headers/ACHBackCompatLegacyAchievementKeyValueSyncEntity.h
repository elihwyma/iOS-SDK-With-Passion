/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <HDKeyValueSyncEntity.h>

@class NSString;

@interface ACHBackCompatLegacyAchievementKeyValueSyncEntity : HDKeyValueSyncEntity

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)category;
+ (id)syncEntityIdentifier;
+ (_Bool)setLegacyDataStoreValuesWithDictionary:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (int)nanoSyncObjectType;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;

@end
