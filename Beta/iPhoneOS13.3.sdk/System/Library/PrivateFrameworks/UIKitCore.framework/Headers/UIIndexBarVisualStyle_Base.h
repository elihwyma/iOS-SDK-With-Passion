/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIIndexBarView;

__attribute__((visibility("hidden")))
@interface UIIndexBarVisualStyle_Base : NSObject

{
    UIIndexBarView *_indexBarView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) UIIndexBarView *indexBarView;
@property (nonatomic, readonly) _Bool canBecomeFocused;
@property (nonatomic, readonly) _Bool overlay;
@property (nonatomic, readonly) double minLineHeight;
@property (nonatomic) _Bool expanded;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithView:(id)arg1;
- (struct CGRect)_visibleBoundsForRect:(struct CGRect)arg1 stride:(double *)arg2;
- (long long)_indexForEntryAtPoint:(struct CGPoint)arg1;
- (id)displayEntryFromEntry:(id)arg1;

@end
