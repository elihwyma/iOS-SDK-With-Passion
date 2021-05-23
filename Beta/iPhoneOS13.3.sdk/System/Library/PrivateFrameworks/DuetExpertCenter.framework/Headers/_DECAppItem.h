/*
 Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

#import <DuetExpertCenter/_DECItem.h>

@class NSString;

@interface _DECAppItem : _DECItem

{
    NSString *_bundleIdentifier;
    long long _sources;
    long long _reason;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) long long sources;
@property (nonatomic) long long reason;

+ (_Bool)supportsSecureCoding;
+ (unsigned long long)category;
+ (id)appWithBundleIdentifier:(id)arg1 sources:(long long)arg2;
+ (id)appWithBundleIdentifier:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEquivalent:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 sources:(long long)arg2;
- (_Bool)_isEqualToDECAppItem:(id)arg1;

@end
