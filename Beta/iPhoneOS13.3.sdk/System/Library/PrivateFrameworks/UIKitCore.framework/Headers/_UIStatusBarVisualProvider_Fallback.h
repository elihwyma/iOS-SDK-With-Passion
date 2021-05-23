/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, _UIStatusBar;

__attribute__((visibility("hidden")))
@interface _UIStatusBarVisualProvider_Fallback : NSObject

{
    _UIStatusBar *_statusBar;
    NSArray *_placements;
}

@property (retain, nonatomic) NSArray *placements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) _UIStatusBar *statusBar;
@property (nonatomic, readonly) _Bool canFixupDisplayItemAttributes;

+ (struct CGSize)intrinsicContentSizeForOrientation:(long long)arg1;

- (id)setupInContainerView:(id)arg1;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;
- (id)styleAttributesForStyle:(long long)arg1;

@end
