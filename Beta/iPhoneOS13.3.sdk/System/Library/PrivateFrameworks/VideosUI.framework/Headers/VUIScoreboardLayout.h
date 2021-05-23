/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class VUIScoreboardRowLayout, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIScoreboardLayout : NSObject

{
    double _padding;
    VUITextLayout *_textLayout;
    VUIScoreboardRowLayout *_topRowLayout;
    VUIScoreboardRowLayout *_bottomRowLayout;
    struct TVCornerRadii _borderRadii;
}

@property (nonatomic) struct TVCornerRadii borderRadii;
@property (nonatomic) double padding;
@property (retain, nonatomic) VUITextLayout *textLayout;
@property (retain, nonatomic) VUIScoreboardRowLayout *topRowLayout;
@property (retain, nonatomic) VUIScoreboardRowLayout *bottomRowLayout;

+ (id)scoreboardALayout;
+ (id)scoreboardBLayout;
+ (id)scoreboardCLayoutWithInnerMargin:(double)arg1;
+ (int)_textBlendMode;
+ (id)_textColor:(long long)arg1;

@end
