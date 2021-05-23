/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

#import <DocumentManagerUICore/Swift-Protocol.h>

@class NSArray;

@protocol DOCTagEditorDelegate;

@protocol DOCTagEditorPresenter <Swift>

@property (nonatomic) _Bool showAddTagConfirmButtons;
@property (nonatomic) _Bool useCompactColorPicker;
@property (nonatomic) _Bool pinTextFieldToTopBound;
@property (nonatomic) _Bool delayResizingUntilAppeared;
@property (nonatomic) _Bool isExtremelyVerticallyCompact;
@property (weak, nonatomic) id <DOCTagEditorDelegate> delegate;
@property (retain, nonatomic) NSArray *items;

@end
