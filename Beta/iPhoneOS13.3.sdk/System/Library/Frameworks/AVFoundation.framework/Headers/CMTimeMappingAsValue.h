/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSValue.h>

__attribute__((visibility("hidden")))
@interface CMTimeMappingAsValue : NSValue

{
    CDStruct_82206317 _timeMapping;
}

+ (_Bool)supportsSecureCoding;
+ (id)valueWithCMTimeMapping:(CDStruct_82206317)arg1;

- (const char *)objCType;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (void)getValue:(void *)arg1;
- (_Bool)isEqualToValue:(id)arg1;
- (CDStruct_82206317)CMTimeMappingValue;

@end
