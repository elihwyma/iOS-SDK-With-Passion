/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CoreDAVCurrentUserPrivilegeSetItem : CoreDAVItem

{
    NSMutableSet *_privileges;
}

@property (retain, nonatomic) NSMutableSet *privileges;

+ (id)copyParseRules;

- (id)init;
- (id)description;
- (void)addPrivilege:(id)arg1;
- (_Bool)hasPrivilegeWithNameSpace:(id)arg1 andName:(id)arg2;

@end
