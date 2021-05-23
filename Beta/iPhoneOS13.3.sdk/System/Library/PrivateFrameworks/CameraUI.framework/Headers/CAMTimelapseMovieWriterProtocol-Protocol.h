/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/Swift-Protocol.h>

@protocol CAMTimelapseMovieWriterProtocol <Swift>

@property (nonatomic, getter=isSuspended) _Bool suspended;

- (unsigned short)writeMovieFromImageFiles:visMetadataFiles:startDate:location:outputPath:transform:framesPerSecond:preferHEVC:completionHandler: /* Error: Ran out of types for this method. */;

@end
