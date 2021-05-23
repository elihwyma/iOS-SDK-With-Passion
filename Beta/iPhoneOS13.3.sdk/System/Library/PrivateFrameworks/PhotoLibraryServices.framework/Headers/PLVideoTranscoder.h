/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PLVideoTranscoder : NSObject

+ (id)exportPresetsCompatibleWithVideoAtURL:(id)arg1;
+ (void)transcodeVideo:(id)arg1 outputURL:(id)arg2 presetName:(id)arg3 outputFileType:(id)arg4 metadata:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (void)transcodeVideoWithObjectBuilder:(id)arg1 outputURL:(id)arg2 startTime:(CDStruct_198678f7)arg3 endTime:(CDStruct_198678f7)arg4 presetName:(id)arg5 outputFileType:(id)arg6 metadata:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
+ (struct NSObject *)generatePosterFrameForVideoAtURL:(id)arg1 maxSize:(struct CGSize)arg2 error:(id *)arg3;
+ (struct NSObject *)generatePosterFrameForAVAsset:(id)arg1 maxSize:(struct CGSize)arg2 error:(id *)arg3;

@end
