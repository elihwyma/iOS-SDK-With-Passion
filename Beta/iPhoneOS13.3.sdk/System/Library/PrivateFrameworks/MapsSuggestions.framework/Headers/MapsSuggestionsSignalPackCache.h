/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface MapsSuggestionsSignalPackCache : NSObject

{
    NSMutableArray *_mapItems;
    NSMutableArray *_signalPacks;
}

- (id)init;
- (unsigned long long)_count;
- (_Bool)insertMapItem:(struct GEOMapItemStorage *)arg1 signalPack:(id)arg2;
- (id)signalPackForMapItem:(struct GEOMapItemStorage *)arg1;
- (_Bool)_popRow;
- (id)_containsSignalPackForMapItem:(struct GEOMapItemStorage *)arg1;
- (void)_removeObjectsAtIndex:(unsigned long long)arg1;

@end
