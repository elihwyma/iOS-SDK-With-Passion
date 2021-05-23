/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class NSInvocation, NSTimer;

__attribute__((visibility("hidden")))
@interface PDFTimerPrivate : NSObject

{
    NSObject *target;
    NSInvocation *methodInvocation;
    NSTimer *timer;
    double timeInterval;
    _Bool isRequested;
}

@end
