/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPAnalysisProgressQuery : NSObject

+ (int)queryProgress:(float *)arg1 forPhotoLibrary:(id)arg2 andTaskID:(unsigned long long)arg3;
+ (unsigned long long)_processAssetBatch:(id)arg1 withDatabase:(id)arg2;

@end
