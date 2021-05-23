/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CoreDAVGrantItem : CoreDAVItem

{
    NSMutableSet *_privileges;
}

@property (retain, nonatomic) NSMutableSet *privileges;

+ (id)copyParseRules;

- (id)init;
- (id)description;
- (void)write:(id)arg1;
- (void)addPrivilege:(id)arg1;

@end
