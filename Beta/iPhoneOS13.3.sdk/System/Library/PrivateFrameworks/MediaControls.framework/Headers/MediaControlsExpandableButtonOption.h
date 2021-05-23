/*
 Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

#import <Foundation/NSObject.h>

@class NSString, UIColor;

@interface MediaControlsExpandableButtonOption : NSObject

{
    NSString *_identifier;
    NSString *_packageName;
    NSString *_title;
    UIColor *_selectedBackgroundColor;
}

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *packageName;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *selectedBackgroundColor;

@end
