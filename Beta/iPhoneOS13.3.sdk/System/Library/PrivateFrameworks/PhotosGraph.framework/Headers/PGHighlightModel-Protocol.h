/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/Swift-Protocol.h>

@class NSString, PHAssetCollection;

@protocol PGHighlightModel <Swift>

@property (nonatomic) unsigned short type;
@property (nonatomic) unsigned short enrichmentState;
@property (nonatomic, readonly, getter=isRecent) _Bool recent;
@property (nonatomic, readonly) _Bool isGroup;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) PHAssetCollection *assetCollection;

- (unsigned short)changeRequest;
- (unsigned short)sceneAnalysisProgressForPhotoLibrary: /* Error: Ran out of types for this method. */;
- (unsigned short)faceAnalysisProgressForPhotoLibrary: /* Error: Ran out of types for this method. */;
- (unsigned short)nonDefaultCurationScorePercentageForPhotoLibrary: /* Error: Ran out of types for this method. */;

@end
