/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSArray, NSNumber;

@interface MPAVRoutingViewControllerUpdateDisplayedRoutesState : NSObject

{
    NSNumber *_version;
    NSArray *_oldRoutes;
    NSArray *_updatedRoutes;
    NSArray *_isEqualBoolsArray;
    NSArray *_isUpdatedBoolsArray;
}

@property (copy, nonatomic) NSNumber *version;
@property (copy, nonatomic) NSArray *oldRoutes;
@property (copy, nonatomic) NSArray *updatedRoutes;
@property (copy, nonatomic) NSArray *isEqualBoolsArray;
@property (copy, nonatomic) NSArray *isUpdatedBoolsArray;

@end
