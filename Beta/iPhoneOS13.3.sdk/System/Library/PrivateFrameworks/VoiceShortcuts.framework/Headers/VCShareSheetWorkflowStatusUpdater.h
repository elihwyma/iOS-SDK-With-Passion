/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <NSObject.h>

@class NSUserDefaults, WFDatabaseResult;

@protocol OS_dispatch_queue, VCDatabaseProvider;

@interface VCShareSheetWorkflowStatusUpdater : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSUserDefaults *_userDefaults;
    id <VCDatabaseProvider> _databaseProvider;
    WFDatabaseResult *_shareSheetWorkflows;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSUserDefaults *userDefaults;
@property (nonatomic, readonly) id <VCDatabaseProvider> databaseProvider;
@property (retain, nonatomic) WFDatabaseResult *shareSheetWorkflows;

- (id)init;
- (id)initWithDatabase:(id)arg1;
- (void)updateWithResult:(id)arg1;
- (void)databaseResult:(id)arg1 didUpdateObjects:(id)arg2 inserted:(id)arg3 removed:(id)arg4;
- (id)initWithDatabaseProvider:(id)arg1 eventHandler:(id)arg2;
- (id)initWithUserDefaults:(id)arg1 databaseProvider:(id)arg2 eventHandler:(id)arg3;
- (void)startIfPossible;
- (void)queue_startIfPossible;

@end
