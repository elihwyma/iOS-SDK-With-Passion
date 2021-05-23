/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface VUILibraryMediaEntityShelvesViewModel : NSObject

{
    NSArray *_shelfTypes;
    NSDictionary *_shelfViewControllerByShelfType;
    NSDictionary *_mediaEntitiesByShelfType;
    CDUnknownBlockType _configureShelfViewControllerBlock;
    CDUnknownBlockType _shelfTypeComparator;
}

@property (copy, nonatomic) CDUnknownBlockType configureShelfViewControllerBlock;
@property (copy, nonatomic) CDUnknownBlockType shelfTypeComparator;
@property (retain, nonatomic) NSArray *shelfTypes;
@property (retain, nonatomic) NSDictionary *shelfViewControllerByShelfType;
@property (nonatomic, readonly) NSDictionary *mediaEntitiesByShelfType;
@property (nonatomic, readonly) _Bool hasContent;

+ (id)_shelfTypesWithMediaEntitiesMap:(id)arg1 shelfTypeComparator:(CDUnknownBlockType)arg2;

- (id)init;
- (void)_updateWithMediaEntitiesMap:(id)arg1 shelfTypes:(id)arg2;
- (id)_shelfCollectionViewControllerWithType:(id)arg1 mediaEntities:(id)arg2;
- (id)initWithMediaEntitiesMap:(id)arg1 shelfTypeComparator:(CDUnknownBlockType)arg2 configureShelfViewControllerBlock:(CDUnknownBlockType)arg3;
- (void)updateContainerCollectionView:(id)arg1 section:(unsigned long long)arg2 mediaEntitiesMap:(id)arg3 mediaEntitiesChangeSetMap:(id)arg4;
- (id)shelfViewControllerForShelfTypeIndex:(unsigned long long)arg1;

@end
