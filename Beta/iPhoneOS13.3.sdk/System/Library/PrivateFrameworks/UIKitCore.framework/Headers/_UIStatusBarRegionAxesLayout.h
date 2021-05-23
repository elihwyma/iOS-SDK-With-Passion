/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, _UIStatusBarRegion;

@protocol _UIStatusBarRegionAxisLayout;

@interface _UIStatusBarRegionAxesLayout : NSObject

{
    _UIStatusBarRegion *_region;
    NSArray *_displayItems;
    id <_UIStatusBarRegionAxisLayout> _horizontalLayout;
    id <_UIStatusBarRegionAxisLayout> _verticalLayout;
    NSArray *_horizontalConstraints;
    NSArray *_verticalConstraints;
    NSArray *_layoutGuides;
}

@property (copy, nonatomic) NSArray *horizontalConstraints;
@property (copy, nonatomic) NSArray *verticalConstraints;
@property (copy, nonatomic) NSArray *layoutGuides;
@property (retain, nonatomic) id <_UIStatusBarRegionAxisLayout> horizontalLayout;
@property (retain, nonatomic) id <_UIStatusBarRegionAxisLayout> verticalLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) _UIStatusBarRegion *region;
@property (copy, nonatomic) NSArray *displayItems;
@property (nonatomic, readonly) _Bool fitsAllItems;

- (void)invalidate;
- (void)_updateConstraints;
- (_Bool)mayFitDisplayItems:(id)arg1;

@end
