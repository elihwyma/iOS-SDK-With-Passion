/*
 Image: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI
 */

#import <Foundation/NSObject.h>

@class NSString, SFActionItem, SFImage, SFPunchout;

@interface _APUIActionCardInfo : NSObject

{
    NSString *_title;
    NSString *_subtitle;
    NSString *_footnote;
    NSString *_bundleId;
    NSString *_appTitle;
    SFImage *_image;
    SFActionItem *_actionItem;
    SFPunchout *_actionPunchout;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *footnote;
@property (retain, nonatomic) NSString *bundleId;
@property (retain, nonatomic) NSString *appTitle;
@property (retain, nonatomic) SFImage *image;
@property (retain, nonatomic) SFActionItem *actionItem;
@property (retain, nonatomic) SFPunchout *actionPunchout;

@end
