/*
 Image: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, NUIContainerGridView;

__attribute__((visibility("hidden")))
@interface NUIGridDimension : NSObject

{
    NUIContainerGridView *_gridView;
    NSArray *_arrangedSubviews;
    NSArray *_visibleArrangedSubviews;
    double _length;
    double _spacing;
    struct {
        unsigned int align:8;
        unsigned int isRow:1;
        unsigned int hidden:1;
        unsigned int wasDetached:1;
    } _flags;
}

@property (copy, nonatomic) NSArray *visibleArrangedSubviews;
@property (nonatomic) double length;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *arrangedSubviews;
@property (nonatomic, getter=isHidden) _Bool hidden;
@property (nonatomic) double spacingAfter;
@property (nonatomic) long long alignment;

- (void)dealloc;
- (void)invalidateArrangedSubviews;
- (id)initWithContainerGridView:(id)arg1 isRow:(_Bool)arg2;

@end
