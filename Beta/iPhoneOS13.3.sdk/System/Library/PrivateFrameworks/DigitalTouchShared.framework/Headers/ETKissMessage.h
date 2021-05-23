/*
 Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

@class KissNode, NSMutableArray, NSMutableSet, SKTexture, SKUniform;

@interface ETKissMessage

{
    SKTexture *_atlas;
    SKUniform *_atlasUniform;
    NSMutableArray *_points;
    NSMutableArray *_angles;
    NSMutableArray *_delays;
    NSMutableSet *_kissMarkNodes;
    double _lastKissTime;
    KissNode *_lastKiss;
    _Bool _didDelegateWillStopPlaying;
    _Bool _didDelegateDidStopPlaying;
}

+ (unsigned short)messageType;
+ (id)_kissColor;

- (id)init;
- (id)archiveData;
- (void)stopPlaying;
- (id)initWithArchiveData:(id)arg1;
- (void)setParentMessage:(id)arg1;
- (id)messageTypeAsString;
- (double)messageDuration;
- (void)displayInScene:(id)arg1;
- (_Bool)reachedSizeLimit;
- (void)addKissAtNormalizedPoint:(struct CGPoint)arg1 angle:(double)arg2 time:(double)arg3 toScene:(id)arg4;
- (void)_initAtlas;
- (_Bool)_leaveMarkAtDelay:(double)arg1;
- (void)_displayKissAtPoint:(struct CGPoint)arg1 angle:(double)arg2 leavesMark:(_Bool)arg3 inScene:(id)arg4;
- (_Bool)_hasKissesThatLeaveMark;
- (void)_notifyDelegateWillStopPlaying;
- (void)_notifyDelegateDidStopPlaying;
- (void)_setKissLeavesMark:(id)arg1;

@end
