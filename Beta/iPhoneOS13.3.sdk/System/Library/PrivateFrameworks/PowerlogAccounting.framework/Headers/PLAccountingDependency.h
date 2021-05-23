/*
 Image: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableSet, NSNumber, PLAccountingRange;

@protocol PLAccountingDependencyManager;

@interface PLAccountingDependency : NSObject

{
    id <PLAccountingDependencyManager> _manager;
    NSNumber *_ID;
    NSDate *_activationDate;
    NSMutableSet *_observingOwnerIDs;
}

@property (retain, nonatomic) NSMutableSet *observingOwnerIDs;
@property (weak) id <PLAccountingDependencyManager> manager;
@property (retain, nonatomic) NSNumber *ID;
@property (retain, nonatomic) PLAccountingRange *range;
@property (retain, nonatomic) NSDate *activationDate;

- (id)description;
- (void)activate;
- (void)deactivate;
- (void)didReceiveOwner:(id)arg1;
- (void)updateWithEndDate:(id)arg1;

@end
