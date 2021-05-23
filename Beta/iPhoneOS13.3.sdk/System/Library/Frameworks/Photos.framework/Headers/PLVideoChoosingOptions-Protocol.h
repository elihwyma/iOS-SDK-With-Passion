/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/Swift-Protocol.h>

@protocol PLVideoChoosingOptions <Swift>

- (unsigned short)isNetworkAccessAllowed;
- (unsigned short)videoVersion;
- (unsigned short)isStreamingAllowed;
- (unsigned short)restrictToPlayableOnCurrentDevice;
- (unsigned short)isMediumHighQualityAllowed;
- (unsigned short)videoDeliveryMode;

@end
