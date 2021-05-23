/*
 Image: /System/Library/PrivateFrameworks/SPFinder.framework/SPFinder
 */

#import <Foundation/NSObject.h>

@class NSArray, NSError, SPSearchResultMarker;

@interface SPBeaconPayloadCacheSearchResult : NSObject

{
    NSError *_error;
    NSArray *_fileURLs;
    SPSearchResultMarker *_searchResultMarker;
}

@property (copy, nonatomic) NSArray *fileURLs;
@property (retain, nonatomic) SPSearchResultMarker *searchResultMarker;
@property (copy, nonatomic) NSError *error;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileURLs:(id)arg1 searchResultMarker:(id)arg2 error:(id)arg3;

@end
