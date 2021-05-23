/*
 Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface PRSRankingItemCollection : NSObject

{
    NSArray *_arrayOfRankingItems;
    unsigned long long _countOfVisibleResults;
    NSString *_bundleIdentifier;
    NSDictionary *_mapResultIdToProtectionClass;
}

@property (retain) NSArray *arrayOfRankingItems;
@property unsigned long long countOfVisibleResults;
@property (retain) NSString *bundleIdentifier;
@property (retain) NSDictionary *mapResultIdToProtectionClass;

- (id)description;

@end
