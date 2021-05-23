/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@interface INHomeAttributeRange : NSObject <Swift>

{
    double _lowerValue;
    double _upperValue;
}

@property (nonatomic, readonly) double lowerValue;
@property (nonatomic, readonly) double upperValue;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRange:(double)arg1 upperValue:(double)arg2;

@end
