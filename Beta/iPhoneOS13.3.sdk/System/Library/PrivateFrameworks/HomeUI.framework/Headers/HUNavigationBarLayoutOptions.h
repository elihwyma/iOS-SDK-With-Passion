/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

#import <HomeUI/Swift-Protocol.h>

@class HUNavigationButtonLayoutOptions;

@interface HUNavigationBarLayoutOptions : NSObject <Swift>

{
    double _topMargin;
    double _bottomMargin;
    double _height;
    HUNavigationButtonLayoutOptions *_buttonLayoutOptions;
    long long _viewSizeSubclass;
    double _containerLeadingMargin;
    double _containerTrailingMargin;
}

@property (nonatomic, readonly) long long viewSizeSubclass;
@property (nonatomic) double containerLeadingMargin;
@property (nonatomic) double containerTrailingMargin;
@property (nonatomic) double topMargin;
@property (nonatomic) double bottomMargin;
@property (nonatomic) double height;
@property (copy, nonatomic) HUNavigationButtonLayoutOptions *buttonLayoutOptions;
@property (nonatomic, readonly) double leadingMargin;
@property (nonatomic, readonly) double trailingMargin;

+ (id)defaultOptionsForViewSizeSubclass:(long long)arg1 containerLeadingMargin:(double)arg2 containerTrailingMargin:(double)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithViewSizeSubclass:(long long)arg1;

@end
