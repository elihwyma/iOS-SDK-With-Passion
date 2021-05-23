/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <PhotoImaging/PIVideoReframeDebugSubject.h>

@interface PIVideoReframeDebugSubjectV2 : PIVideoReframeDebugSubject

{
    _Bool _isVirtualHead;
    _Bool _isVirtualTail;
}

@property _Bool isVirtualHead;
@property _Bool isVirtualTail;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
