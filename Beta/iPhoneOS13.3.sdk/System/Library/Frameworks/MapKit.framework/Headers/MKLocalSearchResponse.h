/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface MKLocalSearchResponse : NSObject

{
    NSArray *_mapItems;
    CDStruct_b7cb895d _boundingRegion;
}

@property (nonatomic, readonly) NSArray *mapItems;
@property (nonatomic, readonly) CDStruct_b7cb895d boundingRegion;

- (id)description;
- (id)_dictionaryRepresentation;
- (id)_initWithMapItems:(id)arg1 boundingRegion:(id)arg2;

@end
