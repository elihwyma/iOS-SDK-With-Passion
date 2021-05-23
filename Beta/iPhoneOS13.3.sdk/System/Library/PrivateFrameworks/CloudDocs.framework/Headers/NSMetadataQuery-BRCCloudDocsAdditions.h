/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <Foundation/NSMetadataQuery.h>

@interface NSMetadataQuery (BRCCloudDocsAdditions)

- (_Bool)br_setupForMonitoringItemAtURL:(id)arg1;
- (void)br_setupForMonitoringChildrenOfFolderAtURL:(id)arg1 searchScopes:(id)arg2;
- (_Bool)br_setupForMonitoringItemAtURL:(id)arg1 searchScopes:(id)arg2;
- (_Bool)br_setupForMonitoringChildrenOfItemAtURL:(id)arg1 searchScopes:(id)arg2;
- (void)br_setupForMonitoringChildrenOfFolderAtURL:(id)arg1;
- (_Bool)br_setupForMonitoringChildrenOfItemAtURL:(id)arg1;

@end
