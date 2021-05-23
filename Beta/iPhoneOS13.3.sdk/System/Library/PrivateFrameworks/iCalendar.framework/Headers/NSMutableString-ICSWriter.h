/*
 Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import <Foundation/NSMutableString.h>

@interface NSMutableString (ICSWriter)

- (id)controlCharacterSet;
- (void)_ICSStripControlChracters;
- (void)_ICSEscapePropertyValue;
- (void)_ICSEscapeParameterValue;
- (void)_ICSEscapeParameterQuotedValue;
- (void)_ICSRemoveCharactersFromSet:(id)arg1;

@end
