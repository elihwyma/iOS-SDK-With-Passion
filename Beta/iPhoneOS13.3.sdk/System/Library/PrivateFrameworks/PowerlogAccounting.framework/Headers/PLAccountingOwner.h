/*
 Image: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableDictionary, NSMutableSet, NSNumber, NSString, PLAccountingRange;

@protocol PLAccountingOwnerManager;

@interface PLAccountingOwner : NSObject

{
    id <PLAccountingOwnerManager> _manager;
    NSNumber *_ID;
    PLAccountingRange *_range;
    NSDate *_activationDate;
    NSDate *_runDate;
    NSMutableSet *_observingDependencyIDs;
    NSMutableDictionary *_dependencyIDToDependenciesInRange;
}

@property (retain, nonatomic) NSMutableSet *observingDependencyIDs;
@property (retain, nonatomic) NSMutableDictionary *dependencyIDToDependenciesInRange;
@property (weak) id <PLAccountingOwnerManager> manager;
@property (retain, nonatomic) NSNumber *ID;
@property (retain, nonatomic) PLAccountingRange *range;
@property (retain, nonatomic) NSDate *activationDate;
@property (retain, nonatomic) NSDate *runDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)run;
- (void)addDependency:(id)arg1;
- (void)activate;
- (void)deactivate;
- (void)allRun;
- (_Bool)hasRun;
- (void)didReceiveDependency:(id)arg1;

@end
