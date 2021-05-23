/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, PDFRenderingProperties, PDFTimer;

__attribute__((visibility("hidden")))
@interface PDFCoachMarkManagerPrivate : NSObject

{
    PDFRenderingProperties *renderingProperties;
    NSMutableDictionary *coachMarks;
    PDFTimer *timer;
}

@end
