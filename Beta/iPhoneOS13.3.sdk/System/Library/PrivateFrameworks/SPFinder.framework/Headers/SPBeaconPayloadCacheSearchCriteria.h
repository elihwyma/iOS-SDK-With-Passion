/*
 Image: /System/Library/PrivateFrameworks/SPFinder.framework/SPFinder
 */

#import <Foundation/NSObject.h>

@class NSNumber, SPSearchResultMarker;

@interface SPBeaconPayloadCacheSearchCriteria : NSObject

{
    SPSearchResultMarker *_searchResultMarker;
    NSNumber *_fetchLimit;
}

@property (retain, nonatomic) SPSearchResultMarker *searchResultMarker;
@property (copy, nonatomic) NSNumber *fetchLimit;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
