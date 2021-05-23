/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVDenyItem, CoreDAVGrantItem, CoreDAVInvertItem, CoreDAVItemWithHrefChildItem, CoreDAVItemWithNoChildren, CoreDAVPrincipalItem;

@interface CoreDAVACEItem : CoreDAVItem

{
    CoreDAVPrincipalItem *_principal;
    CoreDAVInvertItem *_invert;
    CoreDAVGrantItem *_grant;
    CoreDAVDenyItem *_deny;
    CoreDAVItemWithNoChildren *_protectedItem;
    CoreDAVItemWithHrefChildItem *_inherited;
}

@property (retain, nonatomic) CoreDAVPrincipalItem *principal;
@property (retain, nonatomic) CoreDAVInvertItem *invert;
@property (retain, nonatomic) CoreDAVGrantItem *grant;
@property (retain, nonatomic) CoreDAVDenyItem *deny;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *protectedItem;
@property (retain, nonatomic) CoreDAVItemWithHrefChildItem *inherited;

+ (id)copyParseRules;
+ (id)privilegeItemWithNameSpace:(id)arg1 andName:(id)arg2;

- (id)init;
- (id)description;
- (void)write:(id)arg1;
- (id)initWithPrincipal:(id)arg1 shouldInvert:(_Bool)arg2 action:(int)arg3 withPrivileges:(id)arg4;

@end
