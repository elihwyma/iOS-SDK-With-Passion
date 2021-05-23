/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/Swift-Protocol.h>

@protocol PLFaceRebuildDescription <Swift>

@property (nonatomic, readonly) double centerX;
@property (nonatomic, readonly) double centerY;
@property (nonatomic, readonly) double size;
@property (nonatomic, readonly, getter=isHidden) _Bool hidden;
@property (nonatomic, readonly, getter=isManual) _Bool manual;
@property (nonatomic, readonly, getter=isRepresentative) _Bool representative;
@property (nonatomic, readonly) int nameSource;
@property (nonatomic, readonly) int cloudNameSource;
@property (nonatomic, readonly, getter=isClusterRejected) _Bool clusterRejected;

@end
