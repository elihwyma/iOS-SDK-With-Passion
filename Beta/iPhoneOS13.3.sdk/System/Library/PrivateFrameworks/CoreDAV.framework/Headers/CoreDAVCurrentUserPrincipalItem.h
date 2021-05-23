/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVHrefItem, CoreDAVItemWithNoChildren;

@interface CoreDAVCurrentUserPrincipalItem : CoreDAVItem

{
    CoreDAVHrefItem *_href;
    CoreDAVItemWithNoChildren *_unauthenticated;
}

@property (retain, nonatomic) CoreDAVHrefItem *href;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *unauthenticated;

+ (id)copyParseRules;

- (id)init;
- (id)description;

@end
