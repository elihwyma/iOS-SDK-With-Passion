/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSValue.h>

__attribute__((visibility("hidden")))
@interface CMTimeRangeAsValue : NSValue

{
    CDStruct_e83c9415 _timeRange;
}

+ (_Bool)supportsSecureCoding;
+ (id)valueWithCMTimeRange:(CDStruct_e83c9415)arg1;

- (const char *)objCType;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (void)getValue:(void *)arg1;
- (_Bool)isEqualToValue:(id)arg1;
- (CDStruct_e83c9415)CMTimeRangeValue;

@end
