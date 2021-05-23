/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSFormatter.h>

@class NSNumberFormatter;

@interface TSUNumberOrDateOrDurationFormatter : NSFormatter

{
    NSNumberFormatter *mNumberFormatter;
}

- (id)init;
- (void)dealloc;
- (id)stringForObjectValue:(id)arg1;
- (_Bool)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;

@end
