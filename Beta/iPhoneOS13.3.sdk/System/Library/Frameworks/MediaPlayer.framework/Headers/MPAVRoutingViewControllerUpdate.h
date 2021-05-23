/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface MPAVRoutingViewControllerUpdate : NSObject

{
    _Bool _canGroup;
    _Bool _hasPendingPickedRoutes;
    _Bool _shouldReload;
    NSArray *_pickedRoutes;
    NSArray *_pendingPickedRoutes;
    NSArray *_displayableAvailableRoutes;
    NSArray *_displayAsPickedRoutes;
    NSArray *_volumeCapableRoutes;
}

@property (copy, nonatomic) NSArray *pickedRoutes;
@property (copy, nonatomic) NSArray *pendingPickedRoutes;
@property (copy, nonatomic) NSArray *displayableAvailableRoutes;
@property (copy, nonatomic) NSArray *displayAsPickedRoutes;
@property (copy, nonatomic) NSArray *volumeCapableRoutes;
@property (nonatomic) _Bool canGroup;
@property (nonatomic) _Bool hasPendingPickedRoutes;
@property (nonatomic) _Bool shouldReload;

@end
