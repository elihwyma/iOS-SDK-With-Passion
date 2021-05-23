/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSURL.h>

@interface NSURL (TSPersistence)

- (id)pathExceptPrivate;
- (_Bool)isUbiquitous;
- (_Bool)isAssetsLibraryURL;
- (id)URLExceptPrivate;
- (_Bool)isOnNonHFSVolume;

@end
