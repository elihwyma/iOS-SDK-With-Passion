/*
 Image: /System/Library/PrivateFrameworks/SPFinder.framework/SPFinder
 */

#import <Foundation/NSObject.h>

@class NSArray, NSError, SPSearchResultMarker;

@interface SPAdvertisementCacheSearchResult : NSObject

{
    NSError *_error;
    NSArray *_beaconAdvertisements;
    SPSearchResultMarker *_searchResultMarker;
}

@property (retain, nonatomic) NSArray *beaconAdvertisements;
@property (retain, nonatomic) SPSearchResultMarker *searchResultMarker;
@property (retain, nonatomic) NSError *error;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBeaconAdvertisements:(id)arg1 searchResultMarker:(id)arg2 error:(id)arg3;

@end
