/*
 Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

#import <CalendarFoundation/Swift-Protocol.h>

@protocol CalLogFormatter;

@protocol CalLogWriter <Swift>

@property (retain, nonatomic) id <CalLogFormatter> formatter;

- (unsigned short)initWithParameters: /* Error: Ran out of types for this method. */;
- (unsigned short)flush;
- (unsigned short)write: /* Error: Ran out of types for this method. */;

@end
