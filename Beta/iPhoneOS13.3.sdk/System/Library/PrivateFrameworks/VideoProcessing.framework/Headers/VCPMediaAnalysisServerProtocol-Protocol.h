/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@protocol VCPMediaAnalysisServerProtocol

- (unsigned short)cancelAllRequests;
- (unsigned short)cancelRequest: /* Error: Ran out of types for this method. */;
- (unsigned short)notifyLibraryAvailableAtURL: /* Error: Ran out of types for this method. */;
- (unsigned short)requestAssetAnalysis:forPhotoLibraryURL:withLocalIdentifiers:realTime:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)requestLibraryProcessing:withTaskID:forPhotoLibraryURL:withOptions:andReply: /* Error: Ran out of types for this method. */;
- (unsigned short)requestAssetProcessing:withTaskID:forLocalIdentifiers:fromPhotoLibraryWithURL:withOptions:andReply: /* Error: Ran out of types for this method. */;

@end
