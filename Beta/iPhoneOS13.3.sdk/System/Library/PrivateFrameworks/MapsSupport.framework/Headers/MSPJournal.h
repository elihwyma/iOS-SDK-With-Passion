/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

@class NSFileHandle, NSISO8601DateFormatter, NSString;

@protocol MSPJournaling, OS_dispatch_queue;

@interface MSPJournal : NSObject

{
    NSString *_path;
    NSFileHandle *_writeHandle;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSISO8601DateFormatter *_dateFormatter;
    _Bool _analyticsEnabled;
    _Bool _loggingEnabled;
    _Bool _journalEnabled;
    NSString *_name;
    id <MSPJournaling> _delegate;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *path;
@property (weak, nonatomic) id <MSPJournaling> delegate;

- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)filename;
- (id)initWithName:(id)arg1 options:(unsigned long long)arg2;
- (void)noteChangeWithState:(id)arg1 error:(id)arg2;
- (void)noteChangeWithState:(id)arg1;
- (void)noteChangeWithState:(id)arg1 affectedObject:(id)arg2;
- (void)rotateLogIfNeeded;
- (id)rotatedPath;
- (void)appendToLog:(id)arg1 format:(id)arg2;
- (void)appendToJournal:(id)arg1 format:(id)arg2;
- (void)sendTelemetryForState:(id)arg1 affectedObject:(id)arg2;
- (void)noteChangeWithState:(id)arg1 payload:(id)arg2;
- (void)noteChangeWithState:(id)arg1 format:(id)arg2;

@end
