/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

@interface MapsSuggestionsSignalPack : NSObject

{
    struct SignalPack _innerSignalPack;
}

+ (_Bool)supportsSecureCoding;
+ (id)extractFromDestinationMapItem:(struct GEOMapItemStorage *)arg1 originCoordinate:(struct CLLocationCoordinate2D)arg2;
+ (id)extractFromDestinationEntry:(id)arg1 originCoordinate:(struct CLLocationCoordinate2D)arg2;
+ (id)signalPackFromData:(id)arg1;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)mutableCopy;
- (unsigned long long)count;
- (_Bool)isEmpty;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)data;
- (id).cxx_construct;
- (id)initWithSignalPack:(id)arg1;
- (_Bool)mergeIntoSignalPack:(id)arg1;
- (_Bool)hasType:(long long)arg1;
- (float)valueForSignalType:(long long)arg1;
- (struct SignalPack *)innerSignalPack;
- (id)encodedFeatureDictionary;

@end
