/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface ODIBending : NSObject

{
    float mSpaceWidth;
    float mSpaceHeight;
    _Bool mWithArrows;
    float mRectHeight;
    unsigned int mMaxNodeCount;
    unsigned int mMaxColumnCount;
}

+ (unsigned int)mapLogicalBoundsWithShapeSize:(struct CGSize)arg1 spaceSize:(struct CGSize)arg2 maxNodeCount:(unsigned int)arg3 maxColumnCount:(unsigned int)arg4 state:(id)arg5;
+ (_Bool)mapIdentifier:(id)arg1 state:(id)arg2;

- (void)setRectHeight:(float)arg1;
- (void)mapWithState:(id)arg1;
- (id)initWithArrows:(_Bool)arg1;
- (void)setMaxNodeCount:(unsigned int)arg1;
- (void)setMaxColumnCount:(unsigned int)arg1;

@end
