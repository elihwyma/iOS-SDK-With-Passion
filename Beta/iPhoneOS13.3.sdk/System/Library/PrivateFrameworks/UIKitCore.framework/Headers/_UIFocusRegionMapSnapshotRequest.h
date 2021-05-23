/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class UIFocusSystem, UIView;

__attribute__((visibility("hidden")))
@interface _UIFocusRegionMapSnapshotRequest : NSObject <Swift>

{
    _Bool _includeFocusGuides;
    _Bool _includeFocusContainerGuides;
    _Bool _clipToSnapshotRect;
    UIView *_rootView;
    UIFocusSystem *_focusSystem;
    unsigned long long _focusHeading;
    UIView *_focusableRegionAncestorView;
    struct CGRect _snapshotRect;
    struct CGRect _viewSearchRect;
    struct CGRect _focusedRect;
    struct CGRect _visualRepresentationMinimumArea;
}

@property (weak, nonatomic) UIView *rootView;
@property (retain, nonatomic) UIFocusSystem *focusSystem;
@property (nonatomic) struct CGRect snapshotRect;
@property (nonatomic) struct CGRect viewSearchRect;
@property (nonatomic) struct CGRect focusedRect;
@property (nonatomic) unsigned long long focusHeading;
@property (nonatomic) _Bool includeFocusGuides;
@property (nonatomic) _Bool includeFocusContainerGuides;
@property (nonatomic) _Bool clipToSnapshotRect;
@property (weak, nonatomic) UIView *focusableRegionAncestorView;
@property (nonatomic) struct CGRect visualRepresentationMinimumArea;

+ (id)requestWithRootView:(id)arg1 focusSystem:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)takeSnapshot;
- (id)initWithRootView:(id)arg1 focusSystem:(id)arg2;

@end
