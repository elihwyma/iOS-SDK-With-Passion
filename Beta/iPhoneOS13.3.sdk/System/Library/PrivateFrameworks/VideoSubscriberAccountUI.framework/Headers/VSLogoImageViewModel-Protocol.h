/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <VideoSubscriberAccountUI/Swift-Protocol.h>

@class NSItemProvider, NSString, UIImage;

@protocol VSLogoImageViewModel <Swift>

@property (retain, nonatomic) NSItemProvider *logoProvider;
@property (retain, nonatomic) UIImage *logo;
@property (copy, nonatomic) NSString *logoAccessibilityLabel;

@end
