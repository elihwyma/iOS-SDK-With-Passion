/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface MFPGraphicsState : NSObject

{
    struct CGAffineTransform mPageTransform;
    struct CGAffineTransform mWorldTransform;
}

- (void)removeTransform:(struct CGAffineTransform)arg1;
- (id)initWithDefaults;
- (struct CGAffineTransform)worldTransform;
- (void)setWorldTransform:(struct CGAffineTransform)arg1;
- (void)multiplyWorldTransformBy:(struct CGAffineTransform)arg1 order:(int)arg2;
- (void)setPageTransform:(struct CGAffineTransform)arg1;
- (id)initWithGraphicsState:(id)arg1;
- (struct CGAffineTransform)pageTransform;

@end
