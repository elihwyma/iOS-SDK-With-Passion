/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@interface SFPowerSourceLEDInfo : NSObject

{
    int _LEDColor;
    int _LEDState;
}

@property (nonatomic) int LEDColor;
@property (nonatomic) int LEDState;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
