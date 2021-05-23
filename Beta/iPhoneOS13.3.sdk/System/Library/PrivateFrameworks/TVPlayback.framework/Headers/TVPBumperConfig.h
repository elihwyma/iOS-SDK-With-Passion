/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <Foundation/NSObject.h>

@class NSAttributedString, UIImage;

@protocol TVPMediaItem;

@interface TVPBumperConfig : NSObject

{
    NSObject<TVPMediaItem> *_mediaItem;
    UIImage *_logoImage;
    NSAttributedString *_attributedWarningText;
    NSAttributedString *_attributedAppleIDText;
    double _textDwellTime;
    double _maxTextWidth;
}

@property (retain, nonatomic) NSObject<TVPMediaItem> *mediaItem;
@property (retain, nonatomic) UIImage *logoImage;
@property (retain, nonatomic) NSAttributedString *attributedWarningText;
@property (retain, nonatomic) NSAttributedString *attributedAppleIDText;
@property (nonatomic) double textDwellTime;
@property (nonatomic) double maxTextWidth;

- (id)init;

@end
