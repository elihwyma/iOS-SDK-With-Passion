/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INRelevanceProvider.h>

@class CLRegion;

@interface INLocationRelevanceProvider : INRelevanceProvider

{
    CLRegion *_region;
}

@property (copy, nonatomic, readonly) CLRegion *region;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRegion:(id)arg1;

@end
