/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

__attribute__((visibility("hidden")))
@interface VCVideoRuleCollectionsCamera

{
    _Bool _encodeHighDef;
    _Bool _decodeHighDef;
}

+ (id)sharedInstance;

- (double)preferredAspectRatio;
- (_Bool)useSoftFramerateSwitching;
- (_Bool)getBestPreviewFrameWidth:(int *)arg1 frameHeight:(int *)arg2 frameRate:(float *)arg3;
- (_Bool)setupH264CellularRules;
- (void)resetEncodingRulesForCameraIsHD:(_Bool)arg1 isWVGA:(_Bool)arg2;
- (id)bestVideoRuleForEncodingType:(unsigned char)arg1 aspectRatio:(double)arg2 payload:(int)arg3;
- (id)bestVideoRuleForEncodingType:(unsigned char)arg1 aspectRatio:(double)arg2;
- (_Bool)isHiDefCapable;
- (struct _VCBitrateConfiguration *)bitrateConfiguration;

@end
