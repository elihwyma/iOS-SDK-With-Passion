/*
 Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol PXPlacesMapLayoutResult;

@interface PXPlacesMapLayoutDiffer : NSObject

{
    NSMutableArray *_changes;
    id <PXPlacesMapLayoutResult> _sourceLayoutResult;
    id <PXPlacesMapLayoutResult> _targetLayoutResult;
}

@property (nonatomic, readonly) id <PXPlacesMapLayoutResult> sourceLayoutResult;
@property (nonatomic, readonly) id <PXPlacesMapLayoutResult> targetLayoutResult;

- (void)_computeChanges;
- (id)initWithSourceLayoutResult:(id)arg1 targetLayoutResult:(id)arg2;
- (id)computeChanges;
- (void)_addTargetLayoutItem:(id)arg1;
- (void)_removeSourceLayoutItem:(id)arg1;
- (void)_relateSourceLayoutItem:(id)arg1 withTargetLayoutItem:(id)arg2;

@end
