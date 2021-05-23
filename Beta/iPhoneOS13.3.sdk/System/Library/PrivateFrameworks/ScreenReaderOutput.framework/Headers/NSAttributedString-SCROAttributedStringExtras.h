/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (SCROAttributedStringExtras)

- (id)deepCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)getRange:(struct _NSRange *)arg1 ofAttribute:(id)arg2;
- (_Bool)getRange:(struct _NSRange *)arg1 ofAttribute:(id)arg2 withValue:(id)arg3;
- (id)scrAttributedStringByTrimmingTrailingNewlines;

@end
