/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@interface CTSignalStrengthInfo : NSObject

{
    NSNumber *_bars;
    NSNumber *_displayBars;
    NSNumber *_maxDisplayBars;
}

@property (retain, nonatomic) NSNumber *bars;
@property (retain, nonatomic) NSNumber *displayBars;
@property (retain, nonatomic) NSNumber *maxDisplayBars;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
