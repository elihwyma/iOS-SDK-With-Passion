/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class ML3DatabaseConnection, MLMediaLibraryService, NSMutableArray, NSString, NSUUID;

@protocol OS_dispatch_queue;

@interface ML3StatementAccumulator : NSObject

{
    MLMediaLibraryService *_xpcService;
    NSObject<OS_dispatch_queue> *_serialQueue;
    unsigned long long _statementThreshold;
    NSMutableArray *_statementQueue;
    NSString *_databasePath;
    ML3DatabaseConnection *_connection;
    NSUUID *_existingTransactionIdentifier;
    unsigned long long _priorityLevel;
}

@property (nonatomic) unsigned long long statementThreshold;
@property (nonatomic, readonly) NSMutableArray *statementQueue;
@property (nonatomic, readonly) NSString *databasePath;
@property (nonatomic, readonly) ML3DatabaseConnection *connection;
@property (retain, nonatomic) NSUUID *existingTransactionIdentifier;
@property (nonatomic) unsigned long long priorityLevel;

- (id)init;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;
- (_Bool)enqueueStatement:(id)arg1;
- (_Bool)flushAndWait:(_Bool)arg1;
- (_Bool)_onQueueFlushAndWait:(_Bool)arg1;

@end
