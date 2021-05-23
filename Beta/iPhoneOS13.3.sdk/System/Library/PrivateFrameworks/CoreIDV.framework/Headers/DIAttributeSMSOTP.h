/*
 Image: /System/Library/PrivateFrameworks/CoreIDV.framework/CoreIDV
 */

#import <CoreIDV/DIAttributeText.h>

@interface DIAttributeSMSOTP : DIAttributeText

{
    unsigned long long _validityInSeconds;
}

@property (nonatomic) unsigned long long validityInSeconds;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)defaultValue;
- (void)setDefaultValue:(id)arg1;
- (void)setCurrentValue:(id)arg1;
- (id)submissionString;
- (id)getCurrentValue;

@end
