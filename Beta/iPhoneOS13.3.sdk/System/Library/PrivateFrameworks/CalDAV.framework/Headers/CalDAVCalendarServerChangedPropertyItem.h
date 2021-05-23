/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet, NSString;

@interface CalDAVCalendarServerChangedPropertyItem : CoreDAVItem

{
    NSMutableSet *_changedParameters;
    NSString *_nameAttribute;
    NSString *_typeAttribute;
}

@property (retain, nonatomic) NSString *nameAttribute;
@property (retain, nonatomic) NSString *typeAttribute;
@property (retain, nonatomic) NSMutableSet *changedParameters;

- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (void)parserFoundAttributes:(id)arg1;
- (id)copyParseRules;
- (void)addChangedParameter:(id)arg1;

@end
