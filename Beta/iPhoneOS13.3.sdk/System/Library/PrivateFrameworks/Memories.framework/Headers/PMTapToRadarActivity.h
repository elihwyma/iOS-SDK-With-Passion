/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIActivity.h>

@class MiroMovie, VEKProduction, VEKResult;

@interface PMTapToRadarActivity : UIActivity

{
    VEKProduction *_production;
    MiroMovie *_tapToRadarMovie;
    VEKResult *_result;
}

@property (weak, nonatomic) VEKProduction *production;
@property (weak, nonatomic) MiroMovie *tapToRadarMovie;
@property (weak, nonatomic) VEKResult *result;

- (id)activityType;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (id)activityImage;
- (void)performActivity;
- (id)initWithProduction:(id)arg1 result:(id)arg2;
- (id)_returnTextDebugAsString;

@end
