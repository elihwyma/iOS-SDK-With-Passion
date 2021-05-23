/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSTTableRepProcessChangesActions : NSObject

{
    _Bool _invalidateAllChrome;
    _Bool _invalidateColumnChrome;
    _Bool _invalidateRowChrome;
    _Bool _hideChromeContextMenuButton;
    _Bool _invalidateKnobs;
    _Bool _invalidateSelection;
    _Bool _invalidateTableName;
    _Bool _updateEditorRemainders;
    _Bool _syncReferenceHighlightState;
    _Bool _setNeedsDisplay;
    _Bool _hideStepperHUD;
    CDStruct_5f1f7aa9 dirtyCellRange;
    CDStruct_5f1f7aa9 dirtyStrokeRange;
}

@property (nonatomic) CDStruct_5f1f7aa9 dirtyCellRange;
@property (nonatomic) CDStruct_5f1f7aa9 dirtyStrokeRange;
@property (nonatomic) _Bool invalidateAllChrome;
@property (nonatomic) _Bool invalidateColumnChrome;
@property (nonatomic) _Bool invalidateRowChrome;
@property (nonatomic) _Bool hideChromeContextMenuButton;
@property (nonatomic) _Bool invalidateKnobs;
@property (nonatomic) _Bool invalidateSelection;
@property (nonatomic) _Bool invalidateTableName;
@property (nonatomic) _Bool updateEditorRemainders;
@property (nonatomic) _Bool syncReferenceHighlightState;
@property (nonatomic) _Bool setNeedsDisplay;
@property (nonatomic) _Bool hideStepperHUD;

@end
