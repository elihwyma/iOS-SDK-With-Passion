/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem;

@interface CoreDAVPrincipalSearchPropertyItem : CoreDAVItem

{
    CoreDAVItem *_prop;
    CoreDAVLeafItem *_descriptionItem;
}

@property (retain, nonatomic) CoreDAVItem *prop;
@property (retain, nonatomic) CoreDAVLeafItem *descriptionItem;

+ (id)copyParseRules;

- (id)init;
- (id)description;

@end
