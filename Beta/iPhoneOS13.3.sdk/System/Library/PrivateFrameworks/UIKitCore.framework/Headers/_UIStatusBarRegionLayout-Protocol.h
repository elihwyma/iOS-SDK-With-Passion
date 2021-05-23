/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, _UIStatusBarRegion;

@protocol _UIStatusBarRegionLayout <Swift>

@property (weak, nonatomic) _UIStatusBarRegion *region;
@property (copy, nonatomic) NSArray *displayItems;
@property (nonatomic, readonly) _Bool fitsAllItems;

- (unsigned short)invalidate;

@end
