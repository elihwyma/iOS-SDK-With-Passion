/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <UIKit/UIControl.h>

@class NSArray, NSMutableOrderedSet;

@interface AKSegmentedCtrl : UIControl

{
    unsigned long long _selectionType;
    unsigned long long _selectedSegment;
    NSArray *_images;
    NSArray *_buttons;
    NSMutableOrderedSet *_selectionStack;
}

@property (retain, nonatomic) NSArray *images;
@property (retain, nonatomic) NSArray *buttons;
@property (nonatomic) unsigned long long selectedSegment;
@property (retain, nonatomic) NSMutableOrderedSet *selectionStack;
@property (nonatomic) unsigned long long selectionType;

- (void)_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setEnabled:(_Bool)arg1 forSegment:(unsigned long long)arg2;
- (_Bool)isEnabledForSegment:(unsigned long long)arg1;
- (unsigned long long)segmentCount;
- (void)_buttonTapped:(id)arg1;
- (id)initWithImages:(id)arg1;
- (long long)tagForSegment:(unsigned long long)arg1;
- (void)_configureForNewImages;
- (void)_setSelected:(_Bool)arg1 forSegment:(unsigned long long)arg2;
- (id)segmentAtIndex:(unsigned long long)arg1;
- (id)segmentForTag:(long long)arg1;
- (void)setSelected:(_Bool)arg1 forSegment:(unsigned long long)arg2;
- (_Bool)isSelectedForSegment:(unsigned long long)arg1;
- (void)selectSegmentWithTag:(long long)arg1;
- (void)deselectAllSegments;
- (void)setTag:(long long)arg1 forSegment:(unsigned long long)arg2;

@end
