/*
 Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <UIKit/UIButton.h>

@class NSString;

@protocol TextLinkButtonDelegate;

@interface TextLinkButton : UIButton

{
    NSString *_urlString;
    id <TextLinkButtonDelegate> _delegate;
}

@property (nonatomic) id <TextLinkButtonDelegate> delegate;
@property (retain, nonatomic) NSString *urlString;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)tapAction:(id)arg1;

@end
