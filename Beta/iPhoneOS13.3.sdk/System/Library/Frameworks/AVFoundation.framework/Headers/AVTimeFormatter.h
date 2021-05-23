/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSFormatter.h>

@class AVTimeFormatterInternal;

@interface AVTimeFormatter : NSFormatter

{
    AVTimeFormatterInternal *_internal;
}

@property (nonatomic) long long style;
@property (nonatomic) double formatTemplate;
@property (nonatomic, getter=isFullWidth) _Bool fullWidth;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setLocale:(id)arg1;
- (id)locale;
- (id)stringForObjectValue:(id)arg1;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)stringFromTimeInterval:(double)arg1;
- (_Bool)isRightToLeft;
- (id)cachedDateFormatterFormat;
- (id)cachedDateFormatterTemplate;
- (id)numberFormatterWithOneMinimumIntegerDigits;
- (id)numberFormatterWithTwoMinimumIntegerDigits;
- (id)stringFromSeconds:(double)arg1;
- (void)setCachedDateFormatterFormat:(id)arg1;
- (void)setCachedDateFormatterTemplate:(id)arg1;
- (void)setNumberFormatterWithOneMinimumIntegerDigits:(id)arg1;
- (void)setNumberFormatterWithTwoMinimumIntegerDigits:(id)arg1;
- (id)stringFromCMTime:(CDStruct_1b6d18a9)arg1;
- (void)setIsRightToLeft:(_Bool)arg1;

@end
