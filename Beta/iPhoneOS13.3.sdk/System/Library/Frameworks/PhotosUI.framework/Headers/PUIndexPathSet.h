/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

#import <PhotosUI/Swift-Protocol.h>

@interface PUIndexPathSet : NSObject <Swift>

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (long long)count;
- (_Bool)containsIndexPath:(id)arg1;
- (void)enumerateIndexPathsUsingBlock:(CDUnknownBlockType)arg1;

@end
