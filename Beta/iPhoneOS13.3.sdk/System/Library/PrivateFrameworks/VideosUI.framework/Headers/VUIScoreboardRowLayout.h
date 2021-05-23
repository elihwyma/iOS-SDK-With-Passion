/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface VUIScoreboardRowLayout : NSObject

{
    int _backgroundBlendMode;
    int _separatorBlendMode;
    UIColor *_backgroundColor;
    UIColor *_separatorColor;
}

@property (nonatomic) int backgroundBlendMode;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) int separatorBlendMode;
@property (retain, nonatomic) UIColor *separatorColor;

+ (id)_backgroundColorForIdiom:(long long)arg1;
+ (int)_backgroundColorBlendMode;
+ (id)_topRowLayoutForIdiom:(long long)arg1;
+ (id)_bottomLayoutForIdiom:(long long)arg1;

@end
