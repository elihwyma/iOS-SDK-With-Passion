/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, SFDownloadFile;

@protocol OS_dispatch_queue;

@interface _SFDownloadStorageUsageMonitor : NSObject

{
    NSMutableDictionary *_entries;
    SFDownloadFile *_historyFile;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, readonly) long long usage;

- (id)init;
- (void)entryDidChangeUsage:(id)arg1;
- (void)_reloadDownloadHistory;
- (void)downloadFileContentsDidChange:(id)arg1;
- (void)downloadFileWillBeDeleted:(id)arg1;
- (void)downloadFileDidChangeURL:(id)arg1;

@end
