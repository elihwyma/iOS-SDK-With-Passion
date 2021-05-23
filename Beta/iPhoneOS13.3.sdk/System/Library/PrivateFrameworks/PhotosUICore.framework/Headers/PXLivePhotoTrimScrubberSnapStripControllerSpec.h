/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class UIColor;

@interface PXLivePhotoTrimScrubberSnapStripControllerSpec : NSObject

{
    _Bool _alwaysShowKeyTime;
    UIColor *_disabledColor;
    UIColor *_currentPositionMarkerColor;
    UIColor *_originalPositionMarkerColor;
    UIColor *_suggestedMarkerColor;
}

@property (retain, nonatomic) UIColor *disabledColor;
@property (retain, nonatomic) UIColor *currentPositionMarkerColor;
@property (retain, nonatomic) UIColor *originalPositionMarkerColor;
@property (retain, nonatomic) UIColor *suggestedMarkerColor;
@property (nonatomic) _Bool alwaysShowKeyTime;

- (id)init;

@end
