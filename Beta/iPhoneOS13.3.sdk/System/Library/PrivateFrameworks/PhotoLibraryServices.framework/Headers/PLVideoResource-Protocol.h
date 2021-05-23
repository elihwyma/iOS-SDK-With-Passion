/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/Swift-Protocol.h>

@protocol PLVideoResource <Swift>

- (unsigned short)isPlayable;
- (unsigned short)isLocallyAvailable;
- (unsigned short)isLocallyGeneratable;
- (unsigned short)isStreamable;
- (unsigned short)isRemotelyAvailable;
- (unsigned short)isMediumHighQuality;
- (unsigned short)isOriginalVideoComplement;
- (unsigned short)matchesOrExceedsQualityLevel: /* Error: Ran out of types for this method. */;
- (unsigned short)fileURLIfLocal;

@end
