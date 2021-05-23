/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <Foundation/NSObject.h>

@interface CLKComplication : NSObject

{
    long long _family;
}

@property (nonatomic, readonly) long long family;

+ (_Bool)supportsSecureCoding;
+ (id)complicationWithFamily:(long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
