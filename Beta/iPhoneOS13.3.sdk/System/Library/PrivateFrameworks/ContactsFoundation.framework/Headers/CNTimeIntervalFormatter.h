/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSFormatter.h>

@class NSNumberFormatter;

@interface CNTimeIntervalFormatter : NSFormatter

{
    NSNumberFormatter *_numberFormatterWith3SigFigs;
    NSNumberFormatter *_numberFormatterWith4SigFigs;
}

@property (nonatomic, readonly) NSNumberFormatter *numberFormatterWith3SigFigs;
@property (nonatomic, readonly) NSNumberFormatter *numberFormatterWith4SigFigs;

+ (id)stringForTimeInterval:(double)arg1;
+ (id)numberFormatterWithSignificantDigits:(unsigned long long)arg1;
+ (id)sharedFormatter;
+ (id)multiplierForOrder:(long long)arg1;

- (id)stringForObjectValue:(id)arg1;
- (id)stringForTimeInterval:(double)arg1;

@end
