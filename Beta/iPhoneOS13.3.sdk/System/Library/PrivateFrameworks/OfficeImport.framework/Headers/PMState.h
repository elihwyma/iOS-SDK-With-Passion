/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMState.h>

@class CMOutlineState, OADTablePartStyle;

__attribute__((visibility("hidden")))
@interface PMState : CMState

{
    CMOutlineState *mListState;
    OADTablePartStyle *mCurrentRowStyle;
}

- (id)init;
- (id)currentRowStyle;
- (id)listState;
- (void)setCurrentRowStyle:(id)arg1;

@end
