/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <ClockKit/CLKProgressProvider.h>

@interface CLKSimpleProgressProvider : CLKProgressProvider

{
    double _progress;
}

@property (nonatomic) double progress;

+ (_Bool)supportsSecureCoding;
+ (id)simpleProgressProviderWithProgress:(double)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_validate;
- (id)JSONObjectRepresentation;
- (double)_progressFractionForNow:(id)arg1;
- (_Bool)_needsUpdates;

@end
