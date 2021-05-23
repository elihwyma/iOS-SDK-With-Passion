/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class MFPGraphicsState, MFPObjectTable, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface MFPGraphics : NSObject

{
    struct CGRect mCanvas;
    int mHorzDpi;
    int mVertDpi;
    MFPGraphicsState *mCurrentState;
    NSMutableArray *mStateStack;
    MFPObjectTable *mObjectTable;
    NSMutableDictionary *mAvailableFonts;
}

+ (float)unitsPerInch:(int)arg1;

- (id)currentState;
- (id)initWithCanvas:(struct CGRect)arg1;
- (struct CGRect)canvas;
- (void)setHorizontalDpi:(int)arg1 verticalDpi:(int)arg2;
- (id)objectTable;
- (void)fillPath:(id)arg1 brush:(id)arg2;
- (void)strokePath:(id)arg1 pen:(id)arg2;
- (void)saveGraphicsStateWithId:(unsigned int)arg1;
- (void)restoreGraphicsStateOrEndContainerWithId:(unsigned int)arg1;
- (void)beginContainerWithId:(unsigned int)arg1 boundsInParent:(struct CGRect)arg2 bounds:(struct CGRect)arg3 boundsUnit:(int)arg4;
- (void)beginContainerNoParamsWithId:(unsigned int)arg1;
- (struct CGAffineTransform)pageTransformWithScale:(float)arg1 unit:(int)arg2;
- (_Bool)areThereOpenContainers;
- (float)pixelsPerUnit:(int)arg1 direction:(int)arg2;
- (void)beginContainerWithId:(unsigned int)arg1 containerTransform:(struct CGAffineTransform)arg2;
- (id)fontNameForUppercaseFontName:(id)arg1;

@end
