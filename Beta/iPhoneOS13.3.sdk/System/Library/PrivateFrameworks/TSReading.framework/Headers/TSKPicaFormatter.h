/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSFormatter.h>

@class NSNumber, NSString;

@interface TSKPicaFormatter : NSFormatter

{
    NSString *mPicaSeparator;
    NSNumber *mMinimum;
    NSNumber *mMaximum;
}

@property (copy, nonatomic) NSString *picaSeparator;
@property (copy, nonatomic) NSNumber *minimum;
@property (copy, nonatomic) NSNumber *maximum;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)stringForObjectValue:(id)arg1;
- (_Bool)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
- (id)initWithPicaSeparator:(id)arg1;

@end
