/*
 Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CalLogFormatter;

@interface CalLogWriter : NSObject

{
    id <CalLogFormatter> _formatter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) id <CalLogFormatter> formatter;

- (id)init;
- (id)initWithParameters:(id)arg1;
- (_Bool)flush;
- (void)write:(id)arg1;

@end
