/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSMutableString;

@interface _CDStatsPrinter : NSObject

{
    NSMutableString *_s;
    unsigned long long _indent;
}

- (id)init;
- (id)description;
- (void)appendDescription:(id)arg1;
- (void)appendDescription:(id)arg1 dateValue:(id)arg2;
- (void)appendDescription:(id)arg1 stringValue:(id)arg2;
- (void)appendDescription:(id)arg1 integerValue:(long long)arg2;
- (void)pushIndent;
- (void)popIndent;
- (void)appendDescription:(id)arg1 elapsedTimeIntervalValue:(double)arg2;
- (void)appendDescription:(id)arg1 unsignedIntegerValue:(unsigned long long)arg2;
- (id)lineWithDescription:(id)arg1 tab:(_Bool)arg2;
- (void)appendLine:(id)arg1;
- (id)lineWithDescription:(id)arg1;
- (void)appendDescription:(id)arg1 unsignedLongLongValue:(unsigned long long)arg2;
- (void)appendDescription:(id)arg1 longLongValue:(long long)arg2;
- (void)appendStringValue:(id)arg1;
- (void)appendDescription:(id)arg1 boolValue:(_Bool)arg2;
- (void)appendDescription:(id)arg1 enabledValue:(_Bool)arg2;
- (void)appendDescription:(id)arg1 dateWithTimeIntervalValue:(double)arg2;
- (void)appendDescription:(id)arg1 unsignedShortValue:(unsigned short)arg2;
- (void)appendDescription:(id)arg1 intValue:(int)arg2;
- (void)appendDescription:(id)arg1 successRateWithSuccessCount:(unsigned long long)arg2 failureCount:(unsigned long long)arg3;

@end
