/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@interface MPAVBatteryLevel : NSObject

{
    NSNumber *_leftPercentage;
    NSNumber *_rightPercentage;
    NSNumber *_singlePercentage;
    NSNumber *_casePercentage;
}

@property (nonatomic, readonly) NSNumber *leftPercentage;
@property (nonatomic, readonly) NSNumber *rightPercentage;
@property (nonatomic, readonly) NSNumber *singlePercentage;
@property (nonatomic, readonly) NSNumber *casePercentage;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithRouteDescription:(id)arg1;
- (id)initWithOutputDevice:(void *)arg1;

@end
