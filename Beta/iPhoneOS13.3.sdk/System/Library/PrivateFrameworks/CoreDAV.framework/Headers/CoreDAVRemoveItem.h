/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@interface CoreDAVRemoveItem : CoreDAVItem

{
    CoreDAVItem *_prop;
}

@property (retain, nonatomic) CoreDAVItem *prop;

+ (id)copyParseRules;

- (id)init;
- (id)description;

@end
