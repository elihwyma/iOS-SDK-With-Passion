/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class UIColor;

@interface MPArtworkColorAnalysis : NSObject <Swift>

{
    UIColor *_backgroundColor;
    _Bool _backgroundColorLight;
    UIColor *_primaryTextColor;
    _Bool _primaryTextColorLight;
    UIColor *_secondaryTextColor;
    _Bool _secondaryTextColorLight;
}

@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly, getter=isBackgroundColorLight) _Bool backgroundColorLight;
@property (nonatomic, readonly) UIColor *primaryTextColor;
@property (nonatomic, readonly, getter=isPrimaryTextColorLight) _Bool primaryTextColorLight;
@property (nonatomic, readonly) UIColor *secondaryTextColor;
@property (nonatomic, readonly, getter=isSecondaryTextColorLight) _Bool secondaryTextColorLight;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_copyWithClass:(Class)arg1;

@end
