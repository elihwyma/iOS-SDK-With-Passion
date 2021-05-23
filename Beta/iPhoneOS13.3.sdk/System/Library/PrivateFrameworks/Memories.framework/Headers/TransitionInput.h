/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class KonaClip;

__attribute__((visibility("hidden")))
@interface TransitionInput : NSObject

{
    int _ID;
    KonaClip *_clip;
    struct CGSize _naturalSize;
    struct CGAffineTransform _transform;
}

@property (nonatomic) int ID;
@property (nonatomic) struct CGAffineTransform transform;
@property (nonatomic) struct CGSize naturalSize;
@property (nonatomic) KonaClip *clip;

- (id)description;

@end
