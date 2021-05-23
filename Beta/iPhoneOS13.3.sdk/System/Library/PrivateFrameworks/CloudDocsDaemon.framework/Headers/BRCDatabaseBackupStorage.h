/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class NSArray, NSURL, PQLConnection;

__attribute__((visibility("hidden")))
@interface BRCDatabaseBackupStorage : NSObject

{
    PQLConnection *_database;
    NSURL *_databaseURL;
    NSArray *_urlPropertiesToFetch;
    NSURL *_attachedDatabaseURL;
}

@property (retain, nonatomic) NSURL *databaseURL;
@property (retain, nonatomic) PQLConnection *database;
@property (retain, nonatomic) NSArray *urlPropertiesToFetch;
@property (retain, nonatomic) NSURL *attachedDatabaseURL;

- (void)dealloc;
- (_Bool)addRecord:(id)arg1;
- (id)initWithDatabaseURL:(id)arg1;
- (void)flushAndClose;
- (_Bool)setUpDatabaseWithError:(id *)arg1;
- (struct PQLResultSet *)backupManifestEnumerator:(id)arg1;
- (void)populateNewColumnsInDatabase:(id)arg1 forRecord:(id)arg2 basePath:(id)arg3;
- (id)docIDForURL:(id)arg1;
- (_Bool)setForeignKeys:(id)arg1 enabled:(_Bool)arg2;
- (_Bool)negateIDs:(id)arg1;
- (_Bool)updateIDs:(id)arg1;
- (_Bool)clearStagedIDs:(id)arg1;
- (_Bool)fixUpBackupDetector:(id)arg1;
- (_Bool)fixUpClientState:(id)arg1;
- (void)populateNewColumnsWithBasePath:(id)arg1;
- (_Bool)attachDatabase:(id)arg1 error:(id *)arg2;
- (_Bool)updateAttachedDatabase;

@end
