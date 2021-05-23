/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/BRCDownload.h>

@class BRCProgress, BRCServerZone, NSIndexSet;

__attribute__((visibility("hidden")))
@interface BRCDownloadContent : BRCDownload

{
    unsigned long long _liveFileID;
    unsigned int _liveDocumentID;
    _Bool _liveItemIsPackage;
    BRCServerZone *_zone;
    _Bool _isFinderBookmark;
    _Bool _requiresTwoPhase;
    NSIndexSet *_desiredIndices;
}

@property (nonatomic, readonly) _Bool liveItemIsPackage;
@property (nonatomic, readonly) unsigned int liveDocumentID;
@property (nonatomic, readonly) unsigned long long liveFileID;
@property (nonatomic, readonly) NSIndexSet *desiredIndices;
@property (nonatomic, readonly) _Bool requiresTwoPhase;
@property (retain, nonatomic) BRCProgress *progress;

- (id)description;
- (int)kind;
- (id)initWithDocument:(id)arg1 stageID:(id)arg2;
- (_Bool)_stageWithSession:(id)arg1 error:(id *)arg2;
- (_Bool)_prepareSecondStageWithSession:(id)arg1 manifest:(id)arg2 package:(id)arg3 error:(id *)arg4;
- (_Bool)_stageWithSession:(id)arg1 manifest:(id)arg2 package:(id)arg3 xattrsPackage:(id)arg4 error:(id *)arg5;

@end
