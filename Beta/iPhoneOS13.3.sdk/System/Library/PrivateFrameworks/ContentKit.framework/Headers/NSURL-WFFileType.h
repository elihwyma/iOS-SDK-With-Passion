/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSURL.h>

@class NSString, WFFileType;

@interface NSURL (WFFileType)

@property (nonatomic, readonly) WFFileType *wfFileType;
@property (copy, nonatomic, readonly) NSString *wfName;

+ (id)realHomeDirectoryURL;
+ (id)dc_queryStringWithQueryDictionary:(id)arg1;
+ (id)wf_shortcutsDirectoryURL;
+ (id)dc_queryStringWithQueryDictionary:(id)arg1 addingPercentEscapes:(_Bool)arg2;
+ (id)realLibraryDirectoryURL;
+ (id)dc_queryItemsFromQueryString:(id)arg1;
+ (id)dc_dictionaryFromQueryString:(id)arg1;
+ (id)rootVolumeURL;

- (id)fileSize;
- (_Bool)fileExists;
- (id)volumeName;
- (id)dc_queryDictionary;
- (id)dc_fragmentQueryDictionary;
- (_Bool)dc_matchesHost:(id)arg1;
- (_Bool)wf_sandboxAllowsOperation:(const char *)arg1;
- (long long)wf_relationshipToDirectoryAtURL:(id)arg1;
- (_Bool)fileIsReadable;
- (_Bool)fileIsWritable;
- (_Bool)fileIsDirectory;
- (_Bool)wf_sandboxAllowsReadingFile;
- (_Bool)wf_sandboxAllowsWritingFile;
- (_Bool)isContainedByDirectoryAtURL:(id)arg1;
- (_Bool)wf_proposedFileIsContainedByDirectoryAtURL:(id)arg1;

@end
