/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSObject.h>

@class GKCollectionViewDataSource, NSMutableDictionary, NSString;

@interface GKAggregateMapping : NSObject

{
    GKCollectionViewDataSource *_dataSource;
    long long _sectionCount;
    NSString *_dynamicTag;
    NSMutableDictionary *_globalToLocalSections;
    NSMutableDictionary *_localToGlobalSections;
    NSMutableDictionary *_globalSectionsToTags;
}

@property (retain, nonatomic) NSMutableDictionary *globalToLocalSections;
@property (retain, nonatomic) NSMutableDictionary *localToGlobalSections;
@property (retain, nonatomic) NSMutableDictionary *globalSectionsToTags;
@property (retain, nonatomic) GKCollectionViewDataSource *dataSource;
@property (nonatomic) long long sectionCount;
@property (retain, nonatomic) NSString *dynamicTag;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_gkDescriptionWithChildren:(int)arg1;
- (unsigned long long)localSectionForGlobalSection:(unsigned long long)arg1;
- (unsigned long long)globalSectionForLocalSection:(unsigned long long)arg1;
- (id)initWithGlobalToLocalMapping:(id)arg1;
- (void)addMappingFromGlobalSection:(unsigned long long)arg1 toLocalSection:(unsigned long long)arg2 withTag:(id)arg3;
- (id)localIndexPathForGlobalIndexPath:(id)arg1;
- (id)globalIndexPathForLocalIndexPath:(id)arg1;
- (id)tagForGlobalSection:(long long)arg1;
- (unsigned long long)updateMappingsStartingWithGlobalSection:(unsigned long long)arg1;

@end
