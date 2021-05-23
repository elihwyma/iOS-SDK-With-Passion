/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVHrefItem, CoreDAVItemWithNoChildren;

@interface CoreDAVPrincipalItem : CoreDAVItem

{
    CoreDAVHrefItem *_href;
    CoreDAVItemWithNoChildren *_all;
    CoreDAVItemWithNoChildren *_authenticated;
    CoreDAVItemWithNoChildren *_unauthenticated;
    CoreDAVItem *_property;
    CoreDAVItemWithNoChildren *_selfItem;
}

@property (retain, nonatomic) CoreDAVHrefItem *href;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *all;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *authenticated;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *unauthenticated;
@property (retain, nonatomic) CoreDAVItem *property;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *selfItem;

+ (id)copyParseRules;

- (id)init;
- (id)description;
- (void)write:(id)arg1;
- (id)hashString;
- (id)initTypeIsHREFWithURL:(id)arg1;
- (id)initTypeIsAll;
- (id)initTypeIsProperty:(id)arg1;
- (id)initTypeIsAuthenticated;
- (id)initTypeIsUnauthenticated;
- (id)initTypeIsSelf;

@end
