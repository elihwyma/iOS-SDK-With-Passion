/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSMetadataQuery, NSMutableArray;

@protocol CloudSynchDelegate;

__attribute__((visibility("hidden")))
@interface ProjectListModel : NSObject

{
    NSMutableArray *m_projects;
    NSMutableArray *m_iTunesSharedProjects;
    NSMutableArray *m_jailedProjects;
    NSMutableArray *m_unscannedMedia;
    NSMutableArray *_cloudDownloadsToRestart;
    id <CloudSynchDelegate> _cloudSynchDelegate;
    NSMetadataQuery *_ubiquitousQuery;
    NSMutableArray *_maybeInTheCloud;
}

@property (retain, nonatomic) NSMetadataQuery *ubiquitousQuery;
@property (retain, nonatomic) NSMutableArray *maybeInTheCloud;
@property (retain, nonatomic) NSMutableArray *cloudDownloadsToRestart;
@property id <CloudSynchDelegate> cloudSynchDelegate;

+ (id)sharedInstance;
+ (id)unscannedMediaFromPaths:(id)arg1;

- (void)dealloc;
- (id)projects;
- (void)queryTheCloud;
- (id)projectPathsInDirectory:(id)arg1 otherPaths:(id *)arg2;
- (id)projectPathsInDirectory:(id)arg1;
- (void)removeQueryObservers;
- (id)projectPathsInPrivateDocumentsDirectory;
- (void)deleteProject:(id)arg1;
- (void)appendProject:(id)arg1;
- (id)iTunesSharedProjects;
- (id)jailedProjects;
- (id)projectPathsInImportExportDirectoryAndOtherPaths:(id *)arg1;
- (void)appendJailedProject:(id)arg1;
- (void)appendiTunesSharedProject:(id)arg1;
- (void)unloadProjectAtIndex:(unsigned long long)arg1;
- (_Bool)moveSafeSaveProject:(id)arg1;
- (void)startCloudQuery;
- (void)addProject:(id)arg1;
- (id)projectWithPath:(id)arg1;
- (void)removeProject:(id)arg1;
- (void)stopCloudQuery;
- (void)skeletalProjectDidDownload:(id)arg1;
- (void)projectPathDidChange:(id)arg1;
- (void)addQueryObservers;
- (void)didStart:(id)arg1;
- (void)gathering:(id)arg1;
- (void)finishGathering:(id)arg1;
- (void)didUpdate:(id)arg1;
- (void)queueTrashOrphanedRenderedMovies;
- (id)pendingCloudProjectWithPath:(id)arg1;
- (void)trashOrphanedRenderedMovies;
- (void)noteApplicationWillTerminate:(id)arg1;
- (int)pendingCloudProjectsCount;
- (id)unscannedMedia;
- (void)createProjectPlaceholders;
- (void)loadProjectAtIndex:(unsigned long long)arg1;
- (void)unloadAllExceptProject:(id)arg1;
- (void)unloadProject:(id)arg1;
- (void)undeleteProject:(id)arg1;
- (void)deleteUneditedProject:(id)arg1;
- (void)duplicateProject:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)moveJailedProjectToPrivateProject:(id)arg1;
- (id)placeHolderForProject:(id)arg1;
- (void)verifyCloudDownloads;

@end
