/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_queue;

@interface CKSQLitePool : NSObject

{
    _Bool _traced;
    _Bool _drainScheduled;
    CDUnknownBlockType _factory;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_dbs;
}

@property (retain, nonatomic) NSMutableArray *dbs;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) _Bool drainScheduled;
@property (nonatomic, readonly) CDUnknownBlockType factory;
@property (nonatomic) _Bool traced;

- (void)performWithDatabase:(CDUnknownBlockType)arg1;
- (id)initWithFactory:(CDUnknownBlockType)arg1 queueAttr:(id)arg2;
- (id)_openDatabaseWithError:(id *)arg1;
- (id)_acquireDatabaseWithError:(id *)arg1;
- (void)_scheduleDrain;
- (void)_closeDatabase:(id)arg1;
- (void)releaseDatabase:(id)arg1;
- (_Bool)performWithDatabase:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (void)_drain;
- (id)initWithFactory:(CDUnknownBlockType)arg1;
- (id)acquireDatabase:(_Bool)arg1;
- (id)acquireDatabaseWithError:(id *)arg1;
- (void)closeAll;

@end
