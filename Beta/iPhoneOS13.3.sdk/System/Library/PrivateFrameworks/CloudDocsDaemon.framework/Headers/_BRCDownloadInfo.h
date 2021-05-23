/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/_BRCTransferInfo.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _BRCDownloadInfo : _BRCTransferInfo

{
    long long previousCompletedUnitCount;
    long long previousTotalUnitCount;
    NSMutableDictionary *_resumeUnitCounts;
}

@property (nonatomic) long long previousCompletedUnitCount;
@property (nonatomic) long long previousTotalUnitCount;
@property (nonatomic, readonly) NSMutableDictionary *resumeUnitCounts;

- (id)init;
- (void)updateLocalizedDescriptionWithOptions:(BOOL)arg1;
- (void)copyProgressInfoToProgress:(id)arg1 options:(BOOL)arg2;

@end
