/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE, NSCalendar, NSDate, NSString, NTKCharacterResourceLoader, UIColor, _Arms, _Background, _Body, _Foot, _Head;

@protocol MTLBuffer, MTLDevice, MTLRenderPipelineState;

@interface NTKCharacterRenderer : NSObject

{
    id <MTLDevice> _mtlDevice;
    NSCalendar *_cal;
    NSDate *_overrideDate;
    float _overrideDateFraction;
    double _fromHourPercent;
    double _fromMinutePercent;
    double _toHourPercent;
    double _toMinutePercent;
    float _animationFrameInterval;
    int _prevState;
    int _idealState;
    int _curState;
    int _endState;
    int _prevPose;
    int _idealPose;
    int _curPose;
    int _endPose;
    float _hourHandPos;
    float _minHandPos;
    id <MTLRenderPipelineState> _pipelines[4];
    unsigned long long _currentPipeline;
    _Bool _animatingToNewDate;
    _Bool _animatingIntoOrb;
    _Bool _applyInstantTimeWarp;
    _Bool _pinHandsBrightnessToMax;
    _Bool _sayCheese;
    float _blinkDuration;
    float _scrubOffset;
    _Bool _inTimeTravel;
    NSDate *_timeTravelEnterDate;
    NTKCharacterResourceLoader *_loader;
    struct CharacterPoseSpecs _poseSpecs[2];
    struct CharacterStateSpecs _stateSpecs[4];
    _Bool _active;
    float _characterBrightness;
    float _glowBrightness;
    float _numbersBrightness;
    float _numbersScale;
    float _numbersAlpha;
    int _modelMatrixLoc;
    int _clothingColorLoc;
    float _characterScale;
    float _zoomFraction;
    float _dampenBones;
    float _curTimeMod1Sec;
    float _curTimeMod15Sec;
    NSString *_prefix;
    MISSING_TYPE *_globalOffset;
    MISSING_TYPE *_globalScale;
    id <MTLBuffer> _geometryMtlBuffer;
    _Head *_head;
    _Body *_body;
    _Foot *_foot;
    _Arms *_arms;
    _Background *_background;
    UIColor *_clothingColor;
    double _desaturation;
    MISSING_TYPE *_neckBone;
    CDStruct_14d5dc5e _headMatrix;
}

@property (retain) id <MTLBuffer> geometryMtlBuffer;
@property (retain) _Head *head;
@property (retain) _Body *body;
@property (retain) _Foot *foot;
@property (retain) _Arms *arms;
@property (retain) _Background *background;
@property (readonly) UIColor *clothingColor;
@property (readonly) double desaturation;
@property (readonly) int modelMatrixLoc;
@property (readonly) int clothingColorLoc;
@property (readonly) float characterScale;
@property (readonly) float zoomFraction;
@property (readonly) CDStruct_14d5dc5e headMatrix;
@property (readonly) MISSING_TYPE *neckBone;
@property (readonly) float dampenBones;
@property (readonly) float curTimeMod1Sec;
@property (readonly) float curTimeMod15Sec;
@property (nonatomic, readonly) NSString *prefix;
@property (nonatomic, readonly) _Bool active;
@property (nonatomic, readonly) NTKCharacterResourceLoader *loader;
@property (nonatomic) float characterBrightness;
@property (nonatomic) float glowBrightness;
@property (nonatomic) float numbersBrightness;
@property (nonatomic) float numbersScale;
@property (nonatomic) float numbersAlpha;
@property MISSING_TYPE *globalOffset;
@property MISSING_TYPE *globalScale;

+ (id)rendererWithCharacter:(unsigned long long)arg1 loader:(id)arg2;

- (void)dealloc;
- (void)activate;
- (void)setTimeOffset:(double)arg1;
- (void)deactivate;
- (void)setAnimationFrameInterval:(float)arg1;
- (void)_localeChanged;
- (void)setScrubOffset:(float)arg1;
- (void)prepareToZoom;
- (void)cleanupAfterZoom;
- (void)_raiseFootForBodyAnimation;
- (void)_lowerFootAfterBodyAnimation;
- (void)setupGeometry;
- (void)setupPipelineState;
- (void)setupBodyState;
- (void)significantTimeChanged:(id)arg1;
- (void)setupTextures;
- (void)_updateStateAndPose;
- (float)_getElbowScaleForPosition:(float)arg1;
- (void)loadNumbersTexture;
- (void)loadBackgroundTextures;
- (void)loadBodyTextures;
- (void)loadHeadTextures;
- (void)loadFootTextures;
- (void)loadHeadBlinkTextures;
- (void)loadShiftTextures;
- (void)_updateTimeVariables;
- (void)bindPipelineState:(unsigned long long)arg1 withEncoder:(id)arg2;
- (void)_updateWaitingForFootRaise;
- (void)_idleBodyAfterAnimation;
- (void)_applyClothingColorWithEncoder:(id)arg1;
- (_Bool)_footIsRaisedEnoughToStartAnimation;
- (void)_doneWaitingForFootRaise;
- (int)getBlinkFrameFor15sTime:(float)arg1;
- (void)_drawArmFromShoulder:(float)arg1 toWrist:(id)arg2 withBend:withEncoder: /* Error: Ran out of types for this method. */;
- (void)_resetTimeVariable;
- (void)_drawBackgroundWithEncoder:(id)arg1;
- (void)_drawCharacterWithEncoder:(id)arg1;
- (void)_drawBodyWithEncoder:(id)arg1;
- (void)_drawTappingFootWithEncoder:(id)arg1;
- (void)_drawHourHandWithEncoder:(id)arg1;
- (void)_drawHeadWithEncoder:(id)arg1;
- (void)_drawMinuteHandWithEncoder:(id)arg1;
- (void)copyStateFrom:(id)arg1;
- (void)prepareToAnimateToDate:(id)arg1 forOrb:(_Bool)arg2;
- (void)setOverrideDateFraction:(float)arg1;
- (void)cleanupToOverrideDate:(id)arg1;
- (void)setClothingColor:(id)arg1 andDesaturation:(double)arg2;
- (id)initWithCharacter:(unsigned long long)arg1 loader:(id)arg2 prefix:(id)arg3;
- (void)_setPoseSpecs:(struct CharacterPoseSpecs [2])arg1;
- (void)_setStateSpecs:(struct CharacterStateSpecs [4])arg1;
- (void)_setBlinkDuration:(float)arg1;
- (void)setZoomFraction:(double)arg1 diameter:(double)arg2;
- (void)forceUpdateTimeVariables;
- (void)scrubToDate:(id)arg1;
- (void)renderWithEncoder:(id)arg1;
- (int)curState;
- (int)curPose;

@end
