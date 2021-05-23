/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren;

@interface CoreDAVPropFindItem : CoreDAVItem

{
    CoreDAVItemWithNoChildren *_propName;
    CoreDAVItemWithNoChildren *_allProp;
    CoreDAVItem *_include;
    CoreDAVItem *_prop;
}

@property (retain, nonatomic) CoreDAVItemWithNoChildren *propName;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *allProp;
@property (retain, nonatomic) CoreDAVItem *include;
@property (retain, nonatomic) CoreDAVItem *prop;

+ (id)copyParseRules;

- (id)init;
- (id)description;

@end
