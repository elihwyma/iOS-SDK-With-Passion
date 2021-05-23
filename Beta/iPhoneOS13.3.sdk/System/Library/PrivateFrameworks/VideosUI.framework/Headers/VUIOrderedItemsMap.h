/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSOrderedSet;

@protocol VUIOrderedItemsMapDelegate;

__attribute__((visibility("hidden")))
@interface VUIOrderedItemsMap : NSObject

{
    long long _dataSourceType;
    id <VUIOrderedItemsMapDelegate> _delegate;
    NSOrderedSet *_orderedKeys;
    NSDictionary *_mappingDictionary;
}

@property (nonatomic) long long dataSourceType;
@property (copy, nonatomic) NSDictionary *mappingDictionary;
@property (copy, nonatomic) NSOrderedSet *orderedKeys;
@property (weak, nonatomic) id <VUIOrderedItemsMapDelegate> delegate;

- (id)init;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)removeAll;
- (void)processEntities:(id)arg1 forDataSourceType:(long long)arg2;
- (void)updateEntities:(id)arg1;
- (id)_identifierForMediaItem:(id)arg1 withProperty:(id)arg2;
- (void)_generateStoreIdentiferToIndexMapping:(id)arg1 generatesDifferentials:(_Bool)arg2;

@end
