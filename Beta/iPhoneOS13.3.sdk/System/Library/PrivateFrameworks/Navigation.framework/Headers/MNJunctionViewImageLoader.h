/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface MNJunctionViewImageLoader : NSObject

{
    NSArray *_preloadEvents;
    double _imageWidth;
    double _imageHeight;
}

- (id)init;
- (void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;
- (id)_stringForImageIDs:(id)arg1;
- (void)imagesForJunctionView:(id)arg1 eventID:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_imagesForIDs:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)_imagesForRequest:(id)arg1 response:(id)arg2;
- (void)setJunctionViewEvents:(id)arg1;
- (void)updateForLocation:(id)arg1 remainingDistanceOnRoute:(double)arg2;

@end
