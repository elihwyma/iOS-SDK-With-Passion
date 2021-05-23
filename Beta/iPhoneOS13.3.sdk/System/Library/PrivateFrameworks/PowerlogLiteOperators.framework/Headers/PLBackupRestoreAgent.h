/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogCore/PLAgent.h>

@class MBManager;

@interface PLBackupRestoreAgent : PLAgent

{
    _Bool _backupState;
    _Bool _restoreState;
    MBManager *_backupRestoreManager;
}

@property (readonly) MBManager *backupRestoreManager;
@property (nonatomic) _Bool backupState;
@property (nonatomic) _Bool restoreState;

+ (void)load;
+ (id)defaults;
+ (id)entryAggregateDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;

- (id)init;
- (void)log;
- (void)updateRestoreState;
- (void)initOperatorDependancies;
- (void)updateBackupState;
- (void)didChangeEvent:(id)arg1 toState:(_Bool)arg2;

@end
