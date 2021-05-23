/*
 Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

#import <Foundation/NSObject.h>

@class NSCompoundPredicate, NSDate, NSDictionary, NSString, NSURL, _OSLogCollectionReference, _OSLogIndex, _OSLogVersioning;

@protocol OSLogPersistenceDelegate;

@interface OSLogPersistence : NSObject

{
    _OSLogCollectionReference *_oslcr;
    _OSLogVersioning *_version;
    _OSLogIndex *_index;
    _Bool _verbose;
    NSURL *_logFile;
    NSURL *_logArchive;
    id <OSLogPersistenceDelegate> _delegate;
    NSCompoundPredicate *_predicate;
    unsigned long long _batchSize;
    unsigned long long _options;
    NSString *_currentFile;
    NSDate *_startDate;
    NSDate *_sparseDataStart;
    NSDate *_endDate;
    unsigned long long _decodeFailures;
    unsigned long long _messagesFiltered;
    unsigned long long _logMessageCount;
}

@property (retain, nonatomic, readonly) NSDictionary *statistics;
@property (nonatomic, readonly) struct _os_timesync_db_s *timesync;
@property (copy, nonatomic) NSURL *logFile;
@property (copy, nonatomic) NSURL *logArchive;
@property (weak, nonatomic) id <OSLogPersistenceDelegate> delegate;
@property (copy, nonatomic) NSCompoundPredicate *predicate;
@property (nonatomic) unsigned long long batchSize;
@property (nonatomic) unsigned long long options;
@property (nonatomic, readonly) long long archiveState;
@property (nonatomic, readonly) long long archiveVersion;
@property (copy, nonatomic, readonly) NSString *currentFile;
@property (copy, nonatomic, readonly) NSDate *startDate;
@property (copy, nonatomic, readonly) NSDate *sparseDataStart;
@property (copy, nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) unsigned long long decodeFailures;
@property (nonatomic, readonly) unsigned long long messagesFiltered;
@property (nonatomic, readonly) unsigned long long logMessageCount;
@property (nonatomic) _Bool verbose;

- (id)init;
- (void)dealloc;
- (void)_openLocalPersistenceDir;
- (void)_openPath:(id)arg1;
- (void)_openFiles;
- (_Bool)allowSensitive;
- (void)resetWorkingState;
- (_Bool)streamChunks:(CDUnknownBlockType)arg1 andEntries:(CDUnknownBlockType)arg2 flags:(unsigned int)arg3;
- (void)enumerateFromStartDate:(id)arg1 toEndDate:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)enumerateFromLastBootWithBlock:(CDUnknownBlockType)arg1;
- (void)fetchFromStartDate:(id)arg1 toEndDate:(id)arg2;

@end
