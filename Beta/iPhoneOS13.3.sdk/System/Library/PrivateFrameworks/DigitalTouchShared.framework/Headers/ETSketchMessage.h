/*
 Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

@class NSArray, NSMutableArray;

@interface ETSketchMessage

{
    NSMutableArray *_strokes;
    NSMutableArray *_colorsInMessage;
    _Bool _hasMultipleColors;
    _Bool _didEndWisping;
    _Bool _didDrawPoints;
    _Bool _hideComet;
}

@property (nonatomic) _Bool hasMultipleColors;
@property (nonatomic, readonly) unsigned long long numberOfColors;
@property (nonatomic) _Bool didEndWisping;
@property (nonatomic) _Bool didDrawPoints;
@property (nonatomic, readonly) NSArray *strokes;
@property (nonatomic, readonly) NSArray *colorsInMessage;
@property (nonatomic) _Bool hideComet;

+ (unsigned short)messageType;

- (id)init;
- (id)archiveData;
- (void)didEndWisp;
- (void)addStrokeWithColor:(id)arg1;
- (void)willBeginWisp;
- (void)addSketchPoint:(struct CGPoint)arg1;
- (void)didReachRendererLimit;
- (id)initWithArchiveData:(id)arg1;
- (_Bool)_decodeWithDoodle:(id)arg1;
- (void)setParentMessage:(id)arg1;
- (void)addSketchPoint:(struct CGPoint)arg1 atTime:(double)arg2;
- (id)messageTypeAsString;
- (void)convertToSimulatedPlaybackSpeed;
- (double)messageDuration;

@end
