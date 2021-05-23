/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSFormatter.h>

#import <Foundation/Swift-Protocol.h>

@class NSTimeZone;

@interface NSISO8601DateFormatter : NSFormatter <Swift>

{
    struct __CFDateFormatter *_formatter;
    NSTimeZone *_timeZone;
    unsigned long long _formatOptions;
}

@property (copy) NSTimeZone *timeZone;
@property unsigned long long formatOptions;

+ (_Bool)supportsSecureCoding;
+ (id)stringFromDate:(id)arg1 timeZone:(id)arg2 formatOptions:(unsigned long long)arg3;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (void)updateFormatter;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 range:(inout struct _NSRange *)arg3 error:(out id *)arg4;
- (id)stringFromDate:(id)arg1;
- (id)dateFromString:(id)arg1;

@end
