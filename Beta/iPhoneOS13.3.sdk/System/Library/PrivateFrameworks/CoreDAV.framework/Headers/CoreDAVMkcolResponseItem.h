/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CoreDAVMkcolResponseItem : CoreDAVItem

{
    NSMutableSet *_propStats;
}

@property (retain, nonatomic) NSMutableSet *propStats;

+ (id)copyParseRules;

- (id)init;
- (id)description;
- (_Bool)hasPropertyError;
- (void)addPropStat:(id)arg1;

@end
