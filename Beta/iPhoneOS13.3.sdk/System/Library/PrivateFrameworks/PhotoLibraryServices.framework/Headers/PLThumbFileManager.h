/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <AssetsLibraryServices/PLThumbFileManagerCore.h>

@interface PLThumbFileManager : PLThumbFileManagerCore

- (_Bool)setImageForEntry:(id)arg1 withIdentifier:(id)arg2 orIndex:(unsigned long long)arg3 photoUUID:(id)arg4 options:(id)arg5;
- (_Bool)_writeImage:(id)arg1 forThumbIdentifier:(id)arg2;
- (struct CGImage *)createImageWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 decodeSession:(void *)arg3;

@end
