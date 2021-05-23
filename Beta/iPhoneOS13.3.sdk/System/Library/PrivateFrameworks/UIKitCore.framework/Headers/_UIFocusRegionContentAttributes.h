/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class _UIFocusRegion;

__attribute__((visibility("hidden")))
@interface _UIFocusRegionContentAttributes : NSObject <Swift>

{
    _Bool _requiresIntersectionWithFocusMapSearchArea;
    _UIFocusRegion *_contentRegion;
}

@property (copy, nonatomic) _UIFocusRegion *contentRegion;
@property (nonatomic) _Bool requiresIntersectionWithFocusMapSearchArea;

+ (id)attributesForFocusRegionContentInContainer:(id)arg1 coordinateSpace:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
