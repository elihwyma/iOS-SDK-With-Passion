/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@class NSMutableSet;

@interface SYObjectChangeSet : NSObject

{
    NSMutableSet *_added;
    NSMutableSet *_updated;
    NSMutableSet *_deleted;
}

@property (copy, nonatomic) NSMutableSet *added;
@property (copy, nonatomic) NSMutableSet *updated;
@property (copy, nonatomic) NSMutableSet *deleted;

- (id)init;
- (id)changesBetween:(id)arg1 and:(id)arg2;
- (id)initWithChangesBetween:(id)arg1 and:(id)arg2;
- (void)applyToStore:(id)arg1;

@end
