/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

#import <NSObject.h>

@interface OFWeakReferenceHolder : NSObject

{
    id _object;
}

@property (readonly) id object;

+ (id)weakReferenceHolderWithObject:(id)arg1;

- (void)dealloc;
- (id)initWithObject:(id)arg1;

@end
