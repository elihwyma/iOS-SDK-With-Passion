/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE;

@interface SKAttributeValue : NSObject

{
    long long _type;
    float floatValues[4];
    unsigned short halfFloatValues[4];
}

@property (nonatomic, readonly) long long type;
@property (nonatomic) float floatValue;
@property (nonatomic) MISSING_TYPE *vectorFloat2Value;
@property (nonatomic) MISSING_TYPE *vectorFloat3Value;
@property (nonatomic) MISSING_TYPE *vectorFloat4Value;

+ (_Bool)supportsSecureCoding;
+ (id)valueWithFloat:(float)arg1;
+ (id)valueWithVectorFloat2: /* Error: Ran out of types for this method. */;
+ (id)valueWithVectorFloat3: /* Error: Ran out of types for this method. */;
+ (id)valueWithVectorFloat4: /* Error: Ran out of types for this method. */;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)copyValueTo:(void *)arg1 type:(long long)arg2 count:(unsigned int)arg3;
- (_Bool)isEqualToAttributeValue:(id)arg1;

@end
