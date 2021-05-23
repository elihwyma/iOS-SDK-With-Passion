/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class UISlidingBarConfiguration;

@interface UISlidingBarState : NSObject <Swift>

{
    _Bool __treatLeadingHiddenAsOverlaps;
    _Bool __treatTrailingHiddenAsOverlaps;
    double _leadingWidth;
    double _trailingWidth;
    double _leadingDragOffset;
    double _trailingDragOffset;
    UISlidingBarConfiguration *_configuration;
    double __leadingOverlayWidth;
    double __trailingOverlayWidth;
    double __keyboardAdjustment;
    long long __collapsedState;
}

@property (nonatomic) double leadingWidth;
@property (nonatomic) double trailingWidth;
@property (nonatomic) double leadingDragOffset;
@property (nonatomic) double trailingDragOffset;
@property (retain, nonatomic) UISlidingBarConfiguration *configuration;
@property (nonatomic, setter=_setLeadingOverlayWidth:) double _leadingOverlayWidth;
@property (nonatomic, setter=_setTreatLeadingHiddenAsOverlaps:) _Bool _treatLeadingHiddenAsOverlaps;
@property (nonatomic, setter=_setTrailingOverlayWidth:) double _trailingOverlayWidth;
@property (nonatomic, setter=_setTreatTrailingHiddenAsOverlaps:) _Bool _treatTrailingHiddenAsOverlaps;
@property (nonatomic) double _keyboardAdjustment;
@property (nonatomic, setter=_setCollapsedState:) long long _collapsedState;
@property (nonatomic, readonly) _Bool leadingOverlapsMain;
@property (nonatomic, readonly) _Bool trailingOverlapsMain;
@property (nonatomic, readonly, getter=isCollapsed) _Bool collapsed;
@property (nonatomic, readonly) _Bool isLeadingVisible;
@property (nonatomic, readonly) _Bool isTrailingVisible;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)stateRequest;
- (_Bool)_leadingEntirelyOverlapsMain;
- (_Bool)_trailingEntirelyOverlapsMain;
- (id)_interactiveStateRequest;
- (double)_absoluteDistanceFromRequest:(id)arg1;
- (_Bool)_shouldUseSlidingBars;
- (_Bool)matchesRequest:(id)arg1;
- (double)_distanceFromRequest:(id)arg1;

@end
