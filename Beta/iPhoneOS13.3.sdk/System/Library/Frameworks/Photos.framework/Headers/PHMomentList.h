/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHCollectionList.h>

@class NSDate;

@interface PHMomentList : PHCollectionList

{
    short _granularityLevel;
    int _sortIndex;
    NSDate *_representativeDate;
}

@property (nonatomic, readonly) int sortIndex;
@property (nonatomic, readonly) short granularityLevel;
@property (nonatomic, readonly) NSDate *representativeDate;

+ (id)managedEntityName;
+ (id)fetchType;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)identifierCode;
+ (_Bool)managedObjectSupportsTrashedState;
+ (id)entityKeyMap;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;

- (id)description;
- (id)localizedTitle;
- (_Bool)hasLocationInfo;
- (_Bool)hasLocalizedTitle;
- (id)localizedLocationNames;
- (_Bool)collectionHasFixedOrder;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (Class)changeRequestClass;
- (long long)collectionListType;

@end
