/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPArtworkColorAnalysis.h>

@class UIColor;

@interface MPMutableArtworkColorAnalysis : MPArtworkColorAnalysis

@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic, getter=isBackgroundColorLight) _Bool backgroundColorLight;
@property (retain, nonatomic) UIColor *primaryTextColor;
@property (nonatomic, getter=isPrimaryTextColorLight) _Bool primaryTextColorLight;
@property (retain, nonatomic) UIColor *secondaryTextColor;
@property (nonatomic, getter=isSecondaryTextColorLight) _Bool secondaryTextColorLight;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
