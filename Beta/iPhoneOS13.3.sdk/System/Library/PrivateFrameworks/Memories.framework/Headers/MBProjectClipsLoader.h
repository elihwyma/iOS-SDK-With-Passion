/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/MBClipsLoader.h>

@class NSMutableArray, NSMutableDictionary, Project;

__attribute__((visibility("hidden")))
@interface MBProjectClipsLoader : MBClipsLoader

{
    Project *_project;
    NSMutableDictionary *_identifierURLsToClipsMap;
    NSMutableArray *_assetURLs;
}

@property (retain) NSMutableDictionary *identifierURLsToClipsMap;
@property (retain, nonatomic) Project *project;
@property (retain) NSMutableArray *assetURLs;

+ (_Bool)clipFormatValid:(id)arg1 validateVideoFormat:(_Bool)arg2;

- (void)dealloc;
- (void)load;
- (id)clips;
- (void)projectMoviesDidChange:(id)arg1;
- (void)projectDidCleanupUnusedMediaFiles:(id)arg1;
- (void)removeClipWithURL:(id)arg1;
- (id)initWithProject:(id)arg1 showOnlyFavorites:(_Bool)arg2;
- (void)loadClipAtPath:(id)arg1;
- (void)projectDidUndoOrRedo:(id)arg1;
- (long long)countForAllClips;

@end
