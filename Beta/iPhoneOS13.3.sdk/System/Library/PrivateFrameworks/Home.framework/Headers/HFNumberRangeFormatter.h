/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSFormatter.h>

@interface HFNumberRangeFormatter : NSFormatter

{
    NSFormatter *_numberFormatter;
}

@property (retain, nonatomic) NSFormatter *numberFormatter;

- (id)stringForObjectValue:(id)arg1;
- (id)initWithNumberFormatter:(id)arg1;
- (id)stringForNumberRange:(id)arg1;

@end
