/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PDFTilePoolPrivate : NSObject

{
    NSObject<OS_dispatch_queue> *workQueue;
    struct os_unfair_lock_s surfacesLock;
    NSMutableDictionary *surfaces;
    int surfaceType;
}

@end
