/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSSet;

@interface MKPointOfInterestFilter : NSObject

{
    NSSet *_includedCategories;
    NSSet *_excludedCategories;
}

+ (_Bool)supportsSecureCoding;
+ (id)filterIncludingAllCategories;
+ (id)filterExcludingAllCategories;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_geoPOICategoryFilter;
- (_Bool)_excludesAllCategories;
- (id)initExcludingCategories:(id)arg1;
- (id)initIncludingCategories:(id)arg1;
- (_Bool)isEqualToPointOfInterestFilter:(id)arg1;
- (_Bool)_includesAllCategories;
- (id)initIncludingCategories:(id)arg1 excludingCategories:(id)arg2;
- (_Bool)includesCategory:(id)arg1;
- (_Bool)excludesCategory:(id)arg1;

@end
