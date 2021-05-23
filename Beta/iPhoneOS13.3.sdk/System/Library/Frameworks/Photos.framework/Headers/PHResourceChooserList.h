/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSArray, NSManagedObjectContext, NSMutableArray, NSSortDescriptor;

@protocol PHResourceChooserAsset;

@interface PHResourceChooserList : NSObject

{
    id <PHResourceChooserAsset> _asset;
    CDUnknownBlockType _itemHandler;
    CDUnknownBlockType _endOfListHandler;
    long long _hintDataCurrentOffset;
    long long _hintDataNextItemOffset;
    _Bool _finishedPresentingFromHints;
    _Bool _didObserveThumbnailStoreKey;
    NSSortDescriptor *_sortDescriptor;
    NSManagedObjectContext *_context;
    NSArray *_nonHintResources;
    NSArray *_unvisitedNonHintResources;
    unsigned long long _lastPresentedFullResourceIndex;
    _Bool _finishedPresentingFromFetchedResources;
    NSMutableArray *_visitedKeys;
    unsigned long long _enumerationDirection;
}

- (id)init;

@end
