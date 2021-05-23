/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (NTKAlbumAtomQueue)

- (void)enqueueAtom:(id)arg1;
- (id)dequeueAtom;
- (void)enqueueCachedPhoto:(id)arg1;
- (id)dequeueCachedPhoto;

@end
