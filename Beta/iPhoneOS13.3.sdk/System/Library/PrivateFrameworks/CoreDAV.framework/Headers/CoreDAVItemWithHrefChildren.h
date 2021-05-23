/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren, NSMutableSet;

@interface CoreDAVItemWithHrefChildren : CoreDAVItem

{
    NSMutableSet *_hrefs;
    CoreDAVItemWithNoChildren *_unauthenticated;
}

@property (retain, nonatomic) NSMutableSet *hrefs;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *unauthenticated;

+ (id)copyParseRules;

- (id)description;
- (id)hrefsAsOriginalURLs;
- (id)hrefsAsFullURLs;
- (void)addHref:(id)arg1;
- (id)hrefsAsStrings;

@end
