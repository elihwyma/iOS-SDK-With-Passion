/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSCache;

@interface PLPlaceholderImage : NSObject

{
    NSCache *_dumbCache;
}

+ (id)sharedManager;

- (id)init;
- (struct CGImage *)newPlaceholderImageWithSize:(struct CGSize)arg1;

@end
