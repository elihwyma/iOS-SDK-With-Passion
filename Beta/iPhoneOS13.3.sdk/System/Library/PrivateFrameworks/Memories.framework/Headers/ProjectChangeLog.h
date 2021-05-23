/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString, PVEffect, Project;

__attribute__((visibility("hidden")))
@interface ProjectChangeLog : NSObject

{
    Project *m_project;
    NSString *m_themeID;
    NSMutableArray *m_editList;
    NSMutableArray *m_backgroundAudioClips;
    NSMutableArray *m_foregroundAudioClips;
    NSMutableArray *m_cutaways;
    NSMutableSet *m_clipsNeedingDisplay;
    NSMutableSet *m_capturedClips;
    NSMutableArray *m_clipChangeLogs;
    _Bool m_useThemeAudio;
    _Bool m_fadeInFromBlack;
    _Bool m_fadeOutToBlack;
    NSString *m_audioTimePitchAlgorithm;
    NSMutableDictionary *m_trailerDict;
    PVEffect *_filterEffect;
}

@property (nonatomic, readonly) NSSet *capturedClips;
@property (nonatomic, readonly) NSSet *clipsNeedingDisplay;
@property (nonatomic, readonly) _Bool hasChanges;
@property (copy, nonatomic) PVEffect *filterEffect;

- (void)dealloc;
- (id)description;
- (id)initWithProject:(id)arg1;
- (void)captureProject:(id)arg1;
- (void)captureClip:(id)arg1 needsDisplay:(_Bool)arg2;
- (id)redoProjectChangeLog;
- (id)restoreProject;

@end
