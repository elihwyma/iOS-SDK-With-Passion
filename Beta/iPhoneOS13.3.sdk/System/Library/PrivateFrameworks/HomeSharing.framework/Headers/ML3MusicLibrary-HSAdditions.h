/*
 Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <MusicLibrary/ML3MusicLibrary.h>

@interface ML3MusicLibrary (HSAdditions)

+ (void)buildDatabaseFromHomeSharingLibrary:(id)arg1 atPath:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 progressHandler:(CDUnknownBlockType)arg4;
+ (void)buildDatabaseFromHomeSharingLibrary:(id)arg1 atPath:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

- (void)fillContainerForHomeSharingLibrary:(id)arg1 containerID:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)checkForChangesInHomeSharingLibrary:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_performImport:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)executeUpdateSQL:(id)arg1;

@end
