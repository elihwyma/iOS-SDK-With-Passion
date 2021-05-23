/*
 Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

@class NSMutableArray, SKSpriteNode;

@interface ETAngerMessage

{
    SKSpriteNode *_anger;
    NSMutableArray *_points;
    NSMutableArray *_delays;
    double _duration;
    struct CGPoint _normalizedCenter;
}

@property (nonatomic) struct CGPoint normalizedCenter;
@property (nonatomic) double duration;

+ (unsigned short)messageType;

- (id)init;
- (id)archiveData;
- (void)stopPlaying;
- (id)initWithArchiveData:(id)arg1;
- (id)messageTypeAsString;
- (double)messageDuration;
- (void)setNormalizedPoint:(struct CGPoint)arg1 atRelativeTime:(double)arg2 inScene:(id)arg3;
- (void)displayInScene:(id)arg1;
- (void)_updateCenterFromNormalizedPoint:(struct CGPoint)arg1 inScene:(id)arg2;

@end
