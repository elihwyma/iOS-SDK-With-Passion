/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@interface VNSizeRange : NSObject

{
    unsigned long long _minimumDimension;
    unsigned long long _maximumDimension;
    unsigned long long _idealDimension;
}

@property (nonatomic, readonly) unsigned long long minimumDimension;
@property (nonatomic, readonly) unsigned long long maximumDimension;
@property (nonatomic, readonly) unsigned long long idealDimension;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMinimumDimension:(unsigned long long)arg1 maximumDimension:(unsigned long long)arg2 idealDimension:(unsigned long long)arg3;
- (_Bool)isAllowedDimension:(unsigned long long)arg1;

@end
