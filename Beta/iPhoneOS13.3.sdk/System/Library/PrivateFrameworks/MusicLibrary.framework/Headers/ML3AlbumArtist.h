/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/ML3Collection.h>

@interface ML3AlbumArtist : ML3Collection

+ (void)initialize;
+ (id)allProperties;
+ (long long)revisionTrackingCode;
+ (id)trackForeignPersistentID;
+ (id)defaultOrderingTerms;
+ (id)databaseTable;
+ (_Bool)propertyIsCountProperty:(id)arg1;
+ (id)countingQueryForBaseQuery:(id)arg1 countProperty:(id)arg2 forIdentifier:(long long)arg3;
+ (_Bool)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long *)arg3 count:(unsigned long long)arg4 usingConnection:(id)arg5;
+ (id)predisambiguatedProperties;
+ (id)sectionPropertyForProperty:(id)arg1;
+ (id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2;
+ (id)propertiesForGroupingKey;
+ (id)propertiesForGroupingUniqueCollections;
+ (id)protocolItemWithProperties:(id)arg1 inLibrary:(id)arg2;

- (id)multiverseIdentifier;
- (void)updateTrackValues:(id)arg1;
- (id)protocolItem;

@end
