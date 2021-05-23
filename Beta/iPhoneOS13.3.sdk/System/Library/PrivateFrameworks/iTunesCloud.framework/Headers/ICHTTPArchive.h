/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSDateFormatter, NSDictionary, NSMutableArray, NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ICHTTPArchive : NSObject

{
    NSMutableArray *_loggedEvents;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_source> *_flushTimer;
    NSString *_currentArchiveFileName;
    NSDateFormatter *_dateFormatter;
    NSDictionary *_creatorDictionary;
    NSString *_archiveDirectoryPath;
    NSMutableArray *_archiveFilePaths;
    _Bool _hasValidArchiveDirectory;
}

+ (id)sharedArchive;

- (id)init;
- (void)dealloc;
- (void)flush;
- (void)_loadExistingArchivePaths;
- (void)_pruneOldArchives;
- (void)_onQueueFlush;
- (id)_archiveForRequest:(id)arg1;
- (id)_archiveForResponse:(id)arg1 responseData:(id)arg2;
- (id)_archiveCreator;
- (id)_arrayFromHeaderDictionary:(id)arg1;
- (void)archiveRequest:(id)arg1 withResponse:(id)arg2 responseData:(id)arg3;

@end
