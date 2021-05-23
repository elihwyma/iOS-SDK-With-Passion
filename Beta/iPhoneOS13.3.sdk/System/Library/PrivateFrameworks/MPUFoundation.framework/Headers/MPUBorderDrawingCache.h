/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <Foundation/NSObject.h>

@class MPUBorderView, NSCache;

@interface MPUBorderDrawingCache : NSObject

{
    MPUBorderView *_borderView;
    NSCache *_images;
    double _displayScale;
}

@property (nonatomic) double displayScale;

- (id)init;
- (void)dealloc;
- (void)_invalidate;
- (id)_borderView;
- (id)imageForBorderConfiguration:(id)arg1;
- (void)_applicationDidReceiveMemoryWarning:(id)arg1;

@end
