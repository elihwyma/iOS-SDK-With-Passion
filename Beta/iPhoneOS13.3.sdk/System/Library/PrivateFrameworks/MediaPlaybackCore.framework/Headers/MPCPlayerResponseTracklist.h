/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class MPCPlayerResponse, MPCPlayerResponseItem, MPSectionedCollection, NSIndexPath, NSString;

@interface MPCPlayerResponseTracklist : NSObject

{
    unsigned long long _changeItemSupport;
    NSString *_uniqueIdentifier;
    long long _lastChangeDirection;
    long long _upNextItemCount;
    long long _repeatType;
    long long _shuffleType;
    MPCPlayerResponse *_response;
    MPSectionedCollection *_items;
    NSIndexPath *_playingItemIndexPath;
    long long _playingItemGlobalIndex;
    long long _globalItemCount;
}

@property (weak, nonatomic, readonly) MPCPlayerResponse *response;
@property (copy, nonatomic, readonly) MPSectionedCollection *items;
@property (copy, nonatomic, readonly) NSIndexPath *playingItemIndexPath;
@property (nonatomic, readonly) long long playingItemGlobalIndex;
@property (nonatomic, readonly) long long globalItemCount;
@property (nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic, readonly) long long lastChangeDirection;
@property (nonatomic, readonly) long long upNextItemCount;
@property (nonatomic, readonly) MPCPlayerResponseItem *playingItem;
@property (nonatomic, readonly) long long repeatType;
@property (nonatomic, readonly) long long shuffleType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)resetCommandForPlayerPath:(id)arg1 devices:(id)arg2;
+ (id)insertCommandForPlayerPath:(id)arg1 devices:(id)arg2;

- (id)initWithResponse:(id)arg1;
- (id)_stateDumpObject;
- (id)disableModificationsCommand;
- (id)changeItemCommand;
- (id)resetCommand;
- (id)insertCommand;
- (id)shuffleCommand;
- (id)repeatCommand;
- (unsigned long long)_determineChangeItemSupport;
- (id)reorderCommand;

@end
