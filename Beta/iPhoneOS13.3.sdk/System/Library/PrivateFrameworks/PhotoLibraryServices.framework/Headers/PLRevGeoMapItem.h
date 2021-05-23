/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface PLRevGeoMapItem : NSObject

{
    NSArray *_sortedPlaceInfos;
    NSArray *_backupPlaceInfos;
    NSArray *_finalPlaceInfos;
}

@property (nonatomic, readonly) NSArray *sortedPlaceInfos;
@property (nonatomic, readonly) NSArray *backupPlaceInfos;
@property (nonatomic, readonly) NSArray *finalPlaceInfos;

+ (_Bool)supportsSecureCoding;
+ (id)placeInfoWithName:(id)arg1 geoPlaceInfo:(id)arg2 dominantOrderType:(unsigned long long)arg3;
+ (CDUnknownBlockType)sortedAdditionalPlaceInfoComparator;
+ (id)mapItemWithGEOMapItem:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSortedPlaceInfos:(id)arg1 backupPlaceInfos:(id)arg2 finalPlaceInfos:(id)arg3;

@end
