/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSDate, _DKChangeSet;

@interface _DKLocalChangeSets : NSObject

{
    _DKChangeSet *_additionChangeSet;
    _DKChangeSet *_deletionChangeSet;
    NSDate *_queryStartDate;
}

@property (retain, nonatomic) _DKChangeSet *additionChangeSet;
@property (retain, nonatomic) _DKChangeSet *deletionChangeSet;
@property (retain, nonatomic) NSDate *queryStartDate;

- (id)initWithAdditionChangeSet:(id)arg1 deletionChangeSet:(id)arg2 queryStartDate:(id)arg3;

@end
