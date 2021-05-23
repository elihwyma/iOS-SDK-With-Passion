/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class PDFTimerPrivate;

__attribute__((visibility("hidden")))
@interface PDFTimer : NSObject

{
    PDFTimerPrivate *_private;
}

- (void)dealloc;
- (void)cancel;
- (void)_execute;
- (void)update;
- (id)initWithThrottleDelay:(double)arg1 forSelector:(SEL)arg2 forTarget:(id)arg3;
- (id)initWithSelector:(SEL)arg1 forTarget:(id)arg2;
- (_Bool)isUpdateQueued;

@end
