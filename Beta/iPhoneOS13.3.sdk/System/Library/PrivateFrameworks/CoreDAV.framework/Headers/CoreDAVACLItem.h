/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CoreDAVACLItem : CoreDAVItem

{
    NSMutableSet *_accessControlEntities;
}

@property (retain, nonatomic) NSMutableSet *accessControlEntities;

+ (id)copyParseRules;

- (id)init;
- (id)description;
- (void)addACE:(id)arg1;
- (id)notGrantedSubsetOfACEs:(id)arg1;
- (id)liveACEs;

@end
