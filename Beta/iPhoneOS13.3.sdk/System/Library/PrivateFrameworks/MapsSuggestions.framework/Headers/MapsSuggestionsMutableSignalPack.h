/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <MapsSuggestions/MapsSuggestionsSignalPack.h>

@interface MapsSuggestionsMutableSignalPack : MapsSuggestionsSignalPack

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)removeAll;
- (_Bool)writeSignalValue:(float)arg1 forType:(long long)arg2;
- (_Bool)addFromEntry:(id)arg1;
- (_Bool)addFromMapItem:(struct GEOMapItemStorage *)arg1;
- (_Bool)writeSignalValue:(float)arg1 forType:(long long)arg2 gathered:(id)arg3 expires:(id)arg4;
- (_Bool)writeSignalValue:(float)arg1 forType:(long long)arg2 gathered:(id)arg3;
- (_Bool)removeSignalType:(long long)arg1;

@end
