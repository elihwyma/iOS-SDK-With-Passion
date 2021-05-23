/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray, UIKBTree, UIKeyboardSliceSet, UIKeyboardTransitionSlice;

__attribute__((visibility("hidden")))
@interface UIKBSplitKeyplaneGenerator : NSObject

{
    NSMutableArray *_rows;
    NSDictionary *_splitLayoutHints;
    UIKBTree *_sourceKeyboard;
    UIKBTree *_sourceKeyplane;
    struct CGSize _splitKeySizeFactor;
    struct CGSize _keyboardSize;
    double _leftSideWidestRow;
    double _rightSideWidestRow;
    long long _keyboardType;
    UIKeyboardSliceSet *_sliceSet;
    UIKeyboardTransitionSlice *_leftSlice;
    UIKeyboardTransitionSlice *_rightSlice;
}

- (id)init;
- (void)dealloc;
- (id)keysOrderedByPosition;
- (id)generateRivenKeyplaneFromKeyplane:(id)arg1 forKeyboard:(id)arg2;
- (void)addSliceStart:(struct CGRect)arg1 end:(struct CGRect)arg2 startToken:(id)arg3 endToken:(id)arg4 left:(_Bool)arg5 normalization:(int)arg6 isDefaultWidth:(_Bool)arg7 row:(int)arg8;
- (void)splitSpaceKey:(id)arg1 leftSpace:(id)arg2 left:(struct CGRect)arg3 right:(struct CGRect)arg4;
- (void)addKey:(id)arg1 withShape:(id)arg2 forRow:(id)arg3 attribs:(id)arg4 left:(_Bool)arg5 force:(_Bool)arg6 isDefaultWidth:(_Bool)arg7;
- (void)commitUncommittedSlices;
- (void)alignSpaceKeyEdges;
- (id)hintsForRow:(id)arg1;
- (void)initializeGeneratorForKeyplane:(id)arg1 name:(id)arg2;
- (void)organizeKeyplaneIntoRows;
- (void)splitRow:(id)arg1;
- (id)finalizeSplitKeyplane;

@end
