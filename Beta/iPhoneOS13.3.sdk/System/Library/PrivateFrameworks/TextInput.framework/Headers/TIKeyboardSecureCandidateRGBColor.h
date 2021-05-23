/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@interface TIKeyboardSecureCandidateRGBColor : NSObject

{
    double _colorR;
    double _colorG;
    double _colorB;
    double _colorA;
}

@property (nonatomic) double colorR;
@property (nonatomic) double colorG;
@property (nonatomic) double colorB;
@property (nonatomic) double colorA;

+ (_Bool)supportsSecureCoding;
+ (id)blackColor;
+ (id)whiteColor;
+ (id)lightGrayColor;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithR:(double)arg1 G:(double)arg2 B:(double)arg3 A:(double)arg4;

@end
