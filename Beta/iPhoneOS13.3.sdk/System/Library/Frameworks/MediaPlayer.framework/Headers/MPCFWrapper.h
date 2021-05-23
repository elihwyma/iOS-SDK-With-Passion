/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@interface MPCFWrapper : NSObject

{
    _Bool _nullRef;
    const void *_refValue;
}

@property (nonatomic, getter=isNullRef) _Bool nullRef;
@property (nonatomic, readonly) const void *refValue;

- (void)dealloc;
- (id)description;
- (id)initWithCFType:(void *)arg1;

@end
