/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVItemWithNoChildren.h>

@class NSString;

@interface CalDAVCalendarServerChangedParameterItem : CoreDAVItemWithNoChildren

{
    NSString *_nameAttribute;
    NSString *_typeAttribute;
}

@property (retain, nonatomic) NSString *nameAttribute;
@property (retain, nonatomic) NSString *typeAttribute;

- (void)parserFoundAttributes:(id)arg1;

@end
