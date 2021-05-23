/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class NSArray;

@interface HKClinicalProviderSearchResultsPage : NSObject <Swift>

{
    NSArray *_searchResults;
    long long _from;
    long long _nextFrom;
    long long _size;
}

@property (copy, nonatomic, readonly) NSArray *searchResults;
@property (nonatomic, readonly) long long from;
@property (nonatomic, readonly) long long nextFrom;
@property (nonatomic, readonly) long long size;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSearchResults:(id)arg1 from:(long long)arg2 nextFrom:(long long)arg3 size:(long long)arg4;

@end
