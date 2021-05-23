/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class NSString;

@interface CalDAVCompItem : CoreDAVItem

{
    NSString *_nameAttribute;
}

@property (retain, nonatomic) NSString *nameAttribute;

- (id)init;
- (void)write:(id)arg1;
- (void)parserFoundAttributes:(id)arg1;

@end
