/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class NSLayoutAnchor, NSLayoutDimension;

@protocol _UIButtonBarLayoutMetricsData <Swift>

@property (nonatomic, readonly) NSLayoutDimension *verticalSizeGuide;
@property (nonatomic, readonly) NSLayoutDimension *minimumSpaceGuide;
@property (nonatomic, readonly) NSLayoutDimension *flexibleSpaceGuide;
@property (nonatomic, readonly) NSLayoutAnchor *popoverGuideTopAnchor;
@property (nonatomic, readonly) NSLayoutDimension *groupSizeGuide;
@property (nonatomic, readonly) NSLayoutDimension *groupSpacingGuide;
@property (nonatomic, readonly) _Bool createsPopoverLayoutGuides;
@property (nonatomic, readonly) _Bool allowsViewWrappers;

- (unsigned short)_upcastIfReadOnly;

@end
