/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVPrincipalItem;

@interface CoreDAVInvertItem : CoreDAVItem

{
    CoreDAVPrincipalItem *_principal;
}

@property (retain, nonatomic) CoreDAVPrincipalItem *principal;

+ (id)copyParseRules;

- (id)init;
- (id)description;
- (void)write:(id)arg1;

@end
