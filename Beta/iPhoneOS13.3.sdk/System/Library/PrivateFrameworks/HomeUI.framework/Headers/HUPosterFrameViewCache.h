/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface HUPosterFrameViewCache : NSObject

{
    NSMutableArray *_posterFrameViewQueue;
}

@property (retain, nonatomic) NSMutableArray *posterFrameViewQueue;

+ (id)sharedCache;
+ (void)purgeCache;
+ (id)dequeuePosterFrameView;
+ (void)enqueuePosterFrameView:(id)arg1;

- (id)init;

@end
