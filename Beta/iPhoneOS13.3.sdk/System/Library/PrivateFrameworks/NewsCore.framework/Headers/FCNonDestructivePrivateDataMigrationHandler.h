/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSArray;

@protocol FCNonDestructivePrivateDataActionProvider;

@interface FCNonDestructivePrivateDataMigrationHandler : NSObject

{
    _Bool _privateDataSyncingEnabled;
    id <FCNonDestructivePrivateDataActionProvider> _privateDataActionProvider;
    NSArray *_privateDataControllers;
}

@property (retain, nonatomic) id <FCNonDestructivePrivateDataActionProvider> privateDataActionProvider;
@property (copy, nonatomic) NSArray *privateDataControllers;
@property (nonatomic, getter=isPrivateDataSyncingEnabled) _Bool privateDataSyncingEnabled;

- (id)init;
- (id)initWithPrivateDataActionProvider:(id)arg1 privateDataControllers:(id)arg2 privateDataSyncingEnabled:(_Bool)arg3;
- (void)handleMigration;

@end
