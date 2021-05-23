/*
 Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

#import <WatchKit/WKInterfaceObject.h>

@class NSString;

@interface WKInterfaceGroup : WKInterfaceObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setBackgroundImage:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)startAnimating;
- (void)stopAnimating;
- (void)startAnimatingWithImagesInRange:(struct _NSRange)arg1 duration:(double)arg2 repeatCount:(long long)arg3;
- (void)setBackgroundImageData:(id)arg1;
- (void)setBackgroundImageNamed:(id)arg1;

@end
