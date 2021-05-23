/*
 Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

#import <SiriActivation/SiriContext.h>

@interface SiriLongPressButtonContext : SiriContext

{
    double _buttonDownTimestamp;
}

@property (nonatomic) double buttonDownTimestamp;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
