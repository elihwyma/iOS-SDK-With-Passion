/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class NSString;

@interface CalDAVCalendarColorItem : CoreDAVItem

{
    NSString *_symbolicColorName;
}

@property (retain, nonatomic) NSString *symbolicColorName;
@property (retain, nonatomic) NSString *colorString;

- (id)init;
- (void)write:(id)arg1;
- (void)parserFoundAttributes:(id)arg1;

@end
