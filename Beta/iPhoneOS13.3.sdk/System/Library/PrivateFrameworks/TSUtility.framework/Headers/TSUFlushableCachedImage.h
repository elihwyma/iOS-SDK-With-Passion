/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <TSUtility/TSUFlushableObject.h>

@interface TSUFlushableCachedImage : TSUFlushableObject

{
    struct CGImage *_image;
    id _delegate;
    SEL _delegateCreateImageSelector;
}

- (void)dealloc;
- (void)unload;
- (struct CGImage *)newImage;
- (id)initWithDelegate:(id)arg1 createImageSelector:(SEL)arg2;
- (_Bool)hasFlushableContent;

@end
