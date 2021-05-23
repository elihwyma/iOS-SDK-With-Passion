/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@interface CTBundle : NSObject

{
    long long _type;
}

@property (nonatomic) long long type;

+ (_Bool)supportsSecureCoding;
+ (unsigned char)convertBundleType:(id)arg1;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBundleType:(long long)arg1;

@end
