/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, PDFRenderingProperties;

@protocol OS_dispatch_queue, PDFPageBackgroundManagerDelegate;

__attribute__((visibility("hidden")))
@interface PDFPageBackgroundManagerPrivate : NSObject

{
    id <PDFPageBackgroundManagerDelegate> documentDelegate;
    PDFRenderingProperties *renderingProperties;
    unsigned long long activePageIndex;
    NSMutableDictionary *backgroundImageCache[3];
    NSObject<OS_dispatch_queue> *workQueue;
    _Bool isCancled;
    _Bool isWorking;
    _Bool willForceUpdate;
}

@end
