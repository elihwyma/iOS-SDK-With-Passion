/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class MFPGraphicsState;

__attribute__((visibility("hidden")))
@interface MFPGraphicsContainer : NSObject

{
    MFPGraphicsState *mParentGraphicsState;
    struct CGAffineTransform mContainerTransform;
}

- (id)initWithParentGraphicsState:(id)arg1 containerTransform:(struct CGAffineTransform)arg2;
- (id)parentGraphicsState;
- (struct CGAffineTransform)containerTransform;

@end
