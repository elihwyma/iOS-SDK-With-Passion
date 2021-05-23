/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface _UIViewBaselineLoweringInfo : NSObject

{
    UIView *_baselineView;
    double _baselineOffset;
}

@property (nonatomic) UIView *baselineView;
@property (nonatomic) double baselineOffset;

- (id)description;

@end
