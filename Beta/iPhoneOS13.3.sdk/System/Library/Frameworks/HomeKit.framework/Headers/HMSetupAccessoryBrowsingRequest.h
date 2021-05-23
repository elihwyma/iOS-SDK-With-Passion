/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class NSArray;

@interface HMSetupAccessoryBrowsingRequest : NSObject <Swift>

{
    NSArray *_filterCategories;
}

@property (copy, nonatomic, readonly) NSArray *filterCategories;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFilterCategories:(id)arg1;

@end
