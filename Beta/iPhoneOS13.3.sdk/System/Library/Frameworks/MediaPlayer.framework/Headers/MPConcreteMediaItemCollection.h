/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPMediaItemCollection.h>

#import <MediaPlayer/Swift-Protocol.h>

@class MPConcreteMediaEntityPropertiesCache, MPMediaItem, MPMediaQuery;

@interface MPConcreteMediaItemCollection : MPMediaItemCollection <Swift>

{
    long long _identifier;
    MPMediaQuery *_itemsQuery;
    long long _grouping;
    MPMediaItem *_representativeItem;
    MPConcreteMediaEntityPropertiesCache *_propertiesCache;
}

@property (retain, nonatomic, readonly) MPConcreteMediaEntityPropertiesCache *cachedPropertyValues;

+ (_Bool)supportsSecureCoding;
+ (id)createUncachedMediaItemCollectionWithIdentifier:(long long)arg1 valuesForProperties:(id)arg2 itemsQuery:(id)arg3 grouping:(long long)arg4 representativeItemIdentifier:(long long)arg5;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)items;
- (unsigned long long)persistentID;
- (id)valueForProperty:(id)arg1;
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;
- (id)representativeItem;
- (id)mediaLibrary;
- (id)initWithMultiverseIdentifier:(id)arg1 library:(id)arg2;
- (long long)groupingType;
- (void)_enumerateItemPersistentIDsUsingBlock:(CDUnknownBlockType)arg1;
- (id)valuesForProperties:(id)arg1;
- (void)enumerateValuesForProperties:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)itemsQuery;
- (void)setValue:(id)arg1 forProperty:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)invalidateCachedProperties;
- (id)_initWithIdentifier:(long long)arg1 valuesForProperties:(id)arg2 itemsQuery:(id)arg3 grouping:(long long)arg4 representativeItemIdentifier:(long long)arg5 propertiesCache:(id)arg6;
- (id)initWithIdentifier:(long long)arg1 valuesForProperties:(id)arg2 itemsQuery:(id)arg3 grouping:(long long)arg4 representativeItemIdentifier:(long long)arg5;
- (id)initWithIdentifier:(long long)arg1 itemsQuery:(id)arg2 grouping:(long long)arg3;

@end
