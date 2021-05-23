/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSOperationQueue;

@protocol OS_dispatch_queue;

@interface MPArtworkResizeUtility : NSObject

{
    NSObject<OS_dispatch_queue> *_artworkResizingAccessQueue;
    NSOperationQueue *_artworkResizingOperationQueue;
    NSMapTable *_artworkResizingOperations;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *artworkResizingAccessQueue;
@property (retain, nonatomic) NSOperationQueue *artworkResizingOperationQueue;
@property (retain, nonatomic) NSMapTable *artworkResizingOperations;

- (id)init;
- (id)resizeImage:(id)arg1 scaledFittingSize:(struct CGSize)arg2 useExactFittingSizeAsDestinationSize:(_Bool)arg3 saveToDestinationURL:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)cancelResizeImage:(id)arg1;

@end
