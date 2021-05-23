/*
 Image: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
 */

#import <Foundation/NSObject.h>

#import <MetricMeasurement/Swift-Protocol.h>

@class NSOrderedSet, NSString;

@interface MXMSampleTag : NSObject <Swift>

{
    NSOrderedSet *_taxonomy;
    MXMSampleTag *_parent;
}

@property (copy, nonatomic, readonly) NSString *domainNameString;
@property (copy, nonatomic, readonly) MXMSampleTag *parent;

+ (_Bool)supportsSecureCoding;
+ (id)ancestery;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualTo:(id)arg1;
- (id)initWithComponents:(id)arg1;
- (_Bool)isEqualToTag:(id)arg1;
- (_Bool)containsTag:(id)arg1;
- (id)initWithDNString:(id)arg1;
- (id)initWithTaxonomy:(id)arg1;

@end
