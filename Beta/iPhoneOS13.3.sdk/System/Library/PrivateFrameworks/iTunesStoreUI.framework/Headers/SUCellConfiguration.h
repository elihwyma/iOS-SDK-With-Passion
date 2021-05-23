/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class UIView;

@protocol SUCellConfigurationView;

@interface SUCellConfiguration : NSObject

{
    id _context;
    unsigned int _isDeleteConfirmationVisible:1;
    struct CGSize _layoutSize;
    unsigned int _needsDisplay:1;
    id _representedObject;
    UIView<SUCellConfigurationView> *_view;
}

@property (retain, nonatomic) id context;
@property (retain, nonatomic) id representedObject;
@property (nonatomic) struct CGSize layoutSize;
@property (nonatomic) _Bool needsDisplay;
@property (nonatomic) UIView<SUCellConfigurationView> *view;
@property (nonatomic, readonly) unsigned long long numberOfImages;
@property (nonatomic, readonly) unsigned long long numberOfLabels;
@property (nonatomic) _Bool isDeleteConfirmationVisible;

+ (double)minimumRowHeight;
+ (double)rowHeightForContext:(id)arg1 representedObject:(id)arg2;
+ (id)copyDefaultContext;

- (void)dealloc;
- (void)reloadData;
- (unsigned long long)indexOfLabelForPurchaseAnimation;
- (void)drawBackgroundWithModifiers:(unsigned long long)arg1;
- (void)drawWithModifiers:(unsigned long long)arg1;
- (id)stringForLabelAtIndex:(unsigned long long)arg1;
- (struct CGRect)frameForLabelAtIndex:(unsigned long long)arg1;
- (id)fontForLabelAtIndex:(unsigned long long)arg1;
- (long long)textAlignmentForLabelAtIndex:(unsigned long long)arg1;
- (_Bool)getShadowColor:(id *)arg1 offset:(struct CGSize *)arg2 forLabelAtIndex:(unsigned long long)arg3 withModifiers:(unsigned long long)arg4;
- (id)colorForLabelAtIndex:(unsigned long long)arg1 withModifiers:(unsigned long long)arg2;
- (id)imageAtIndex:(unsigned long long)arg1 withModifiers:(unsigned long long)arg2;
- (struct CGRect)frameForImageAtIndex:(unsigned long long)arg1;
- (struct CGRect)frameForAccessoryViewWithFrame:(struct CGRect)arg1;

@end
