/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CoreDAVPrincipalSearchPropertySetItem : CoreDAVItem

{
    NSMutableSet *_principalSearchProperties;
}

@property (retain, nonatomic) NSMutableSet *principalSearchProperties;

+ (id)copyParseRules;

- (id)init;
- (id)description;
- (void)addPrincipalSearchProperty:(id)arg1;

@end
