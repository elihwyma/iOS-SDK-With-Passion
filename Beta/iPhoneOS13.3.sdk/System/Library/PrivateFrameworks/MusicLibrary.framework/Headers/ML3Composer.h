/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/ML3Collection.h>

@interface ML3Composer : ML3Collection

+ (void)initialize;
+ (id)allProperties;
+ (long long)revisionTrackingCode;
+ (id)trackForeignPersistentID;
+ (id)defaultOrderingTerms;
+ (id)databaseTable;
+ (id)joinClausesForProperty:(id)arg1;
+ (_Bool)propertyIsCountProperty:(id)arg1;
+ (id)countingQueryForBaseQuery:(id)arg1 countProperty:(id)arg2 forIdentifier:(long long)arg3;
+ (id)predisambiguatedProperties;
+ (id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2;
+ (id)propertiesForGroupingKey;
+ (id)protocolItemWithProperties:(id)arg1 inLibrary:(id)arg2;

- (id)multiverseIdentifier;
- (void)updateTrackValues:(id)arg1;
- (id)protocolItem;

@end
