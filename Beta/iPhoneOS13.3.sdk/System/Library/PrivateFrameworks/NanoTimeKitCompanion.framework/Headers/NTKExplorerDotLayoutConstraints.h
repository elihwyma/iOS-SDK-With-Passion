/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@interface NTKExplorerDotLayoutConstraints : NSObject

{
    double _dotDiameter;
    double _dotBorderWidth;
    double _dotSpacing;
    double _noServiceDotHeight;
}

@property double dotDiameter;
@property double dotBorderWidth;
@property double dotSpacing;
@property double noServiceDotHeight;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToLayoutConstraints:(id)arg1;

@end
