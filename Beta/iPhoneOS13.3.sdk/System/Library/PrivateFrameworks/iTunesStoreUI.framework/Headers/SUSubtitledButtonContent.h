/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIColor;

@interface SUSubtitledButtonContent : NSObject

{
    NSString *_subtitle;
    UIColor *_subtitleColor;
    UIColor *_subtitleShadowColor;
}

@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UIColor *subtitleColor;
@property (retain, nonatomic) UIColor *subtitleShadowColor;

- (void)dealloc;

@end
