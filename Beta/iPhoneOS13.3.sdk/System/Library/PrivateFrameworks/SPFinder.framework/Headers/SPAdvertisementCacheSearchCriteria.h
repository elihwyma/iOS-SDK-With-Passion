/*
 Image: /System/Library/PrivateFrameworks/SPFinder.framework/SPFinder
 */

#import <Foundation/NSObject.h>

@class SPSearchResultMarker;

@interface SPAdvertisementCacheSearchCriteria : NSObject

{
    SPSearchResultMarker *_searchResultMarker;
}

@property (retain, nonatomic) SPSearchResultMarker *searchResultMarker;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
