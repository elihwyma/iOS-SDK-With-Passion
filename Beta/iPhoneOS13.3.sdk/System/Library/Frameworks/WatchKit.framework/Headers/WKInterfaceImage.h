/*
 Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

#import <WatchKit/WKInterfaceObject.h>

@class NSString;

@interface WKInterfaceImage : WKInterfaceObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setImage:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)startAnimating;
- (void)stopAnimating;
- (void)setImageData:(id)arg1;
- (void)startAnimatingWithImagesInRange:(struct _NSRange)arg1 duration:(double)arg2 repeatCount:(long long)arg3;
- (void)setImageNamed:(id)arg1;

@end
