/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMHTMLElement.h>

@interface DOMHTMLMarqueeElement : DOMHTMLElement

- (void)stop;
- (void)start;
- (id)width;
- (id)height;
- (void)setWidth:(id)arg1;
- (void)setHeight:(id)arg1;
- (id)direction;
- (void)setDirection:(id)arg1;
- (id)behavior;
- (void)setBehavior:(id)arg1;
- (void)setScrollAmount:(unsigned int)arg1;
- (unsigned int)scrollAmount;
- (unsigned int)hspace;
- (void)setHspace:(unsigned int)arg1;
- (unsigned int)vspace;
- (void)setVspace:(unsigned int)arg1;
- (id)bgColor;
- (void)setBgColor:(id)arg1;
- (int)loop;
- (void)setLoop:(int)arg1;
- (unsigned int)scrollDelay;
- (void)setScrollDelay:(unsigned int)arg1;
- (_Bool)trueSpeed;
- (void)setTrueSpeed:(_Bool)arg1;

@end
