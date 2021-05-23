/*
 Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

#import <Foundation/NSFormatter.h>

@interface AKAuthorizationNameFormatter : NSFormatter

+ (void)_addSymbolModifiersToCharacterSet:(id)arg1;
+ (id)validNameCharacterSet;

- (id)stringForObjectValue:(id)arg1;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (_Bool)isPartialStringValid:(id *)arg1 proposedSelectedRange:(struct _NSRange *)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange)arg4 errorDescription:(id *)arg5;
- (_Bool)_isOnlyWhitespace:(id)arg1;
- (id)_cleanNameString:(id)arg1;

@end
