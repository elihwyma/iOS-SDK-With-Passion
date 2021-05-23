/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIPopoverLayoutInfo : NSObject <Swift>

{
    struct UIEdgeInsets _contentInset;
    double _arrowHeight;
    double _arrowOffset;
    struct CGSize _preferredContentSize;
    unsigned long long _preferredArrowDirections;
    struct CGRect _containingFrame;
    struct UIEdgeInsets _containingFrameInsets;
    struct CGRect _sourceViewRect;
    _Bool _canOverlapSourceViewRect;
    struct CGRect _frame;
    double _offset;
    unsigned long long _arrowDirection;
    _Bool _preferLandscapeOrientations;
    _Bool _updatesEnabled;
    NSMutableArray *_candidates;
}

@property (nonatomic, getter=_updatesEnabled, setter=_setUpdatesEnabled:) _Bool updatesEnabled;
@property (nonatomic) struct UIEdgeInsets contentInset;
@property (nonatomic) double arrowHeight;
@property (nonatomic) double arrowOffset;
@property (nonatomic) struct CGSize preferredContentSize;
@property (nonatomic) unsigned long long preferredArrowDirections;
@property (nonatomic) struct CGRect containingFrame;
@property (nonatomic) struct UIEdgeInsets containingFrameInsets;
@property (nonatomic) struct CGRect sourceViewRect;
@property (nonatomic) _Bool canOverlapSourceViewRect;
@property (nonatomic) _Bool preferLandscapeOrientations;
@property (nonatomic, readonly) struct CGRect frame;
@property (nonatomic, readonly) double offset;
@property (nonatomic, readonly) unsigned long long arrowDirection;

+ (id)_observationKeys;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateProperties:(CDUnknownBlockType)arg1;
- (id)candidates;
- (void)_updateOutputs;
- (struct CGSize)_popoverViewSizeForContentSize:(struct CGSize)arg1 arrowDirection:(unsigned long long)arg2;

@end
