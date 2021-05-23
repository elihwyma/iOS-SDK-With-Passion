/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSLock, NSMutableDictionary, NSString;

@interface PVEffect : NSObject

{
    NSString *_effectID;
    NSString *_effectType;
    NSString *_displayName;
    CDStruct_e83c9415 _effectRange;
    NSMutableDictionary *_inspectableProperties;
    NSLock *_inspectablePropertiesLock;
    NSMutableDictionary *_effectParameters;
    struct atomic<unsigned int> *_loadCount;
    _Bool _conformToInputAspect;
    _Bool _isPreview;
    _Bool _isRecording;
    _Bool _useLocalLoopTime;
    _Bool _isInInteractiveMode;
    _Bool _shouldDisableFadeOut;
}

@property (nonatomic) CDStruct_e83c9415 effectRange;
@property (nonatomic) _Bool conformToInputAspect;
@property (copy, nonatomic) NSDictionary *inspectableProperties;
@property (retain, nonatomic) NSMutableDictionary *effectParameters;
@property (nonatomic) _Bool isPreview;
@property (nonatomic) _Bool isRecording;
@property (nonatomic) _Bool useLocalLoopTime;
@property (nonatomic) _Bool isInInteractiveMode;
@property (nonatomic) _Bool shouldDisableFadeOut;

+ (_Bool)supportsSecureCoding;
+ (void)setInteractiveMode:(_Bool)arg1;
+ (void)initEffectRegistry;
+ (id)newEffectWithID:(id)arg1;
+ (id)registeredEffectIDsForEffectType:(id)arg1;
+ (id)categoryForEffectID:(id)arg1;
+ (_Bool)effectIDIsNone:(id)arg1;
+ (void)initEffectRegistryWithHostDelegate:(id)arg1;
+ (void)cleanupEffectsCache;
+ (void)noteApplicationDidReceiveMemoryWarning;
+ (id)effectTypeForEffectID:(id)arg1;
+ (id)displayNameForEffectID:(id)arg1;
+ (_Bool)effectIDIsRegistered:(id)arg1;
+ (id)propertiesForEffect:(id)arg1;
+ (void)registerEffectClass:(Class)arg1 forEffectID:(id)arg2 withProperties:(id)arg3;
+ (void)handleCleanupEffectsCache;
+ (void)handleApplicationWillTerminate;
+ (void)handleApplicationDidReceiveMemoryWarning;
+ (void)cleanupEffectsSingletons;
+ (_Bool)isInteractiveMode;
+ (void)registerEffects;
+ (id)newEffectWithURL:(id)arg1;
+ (id)newEffectWithURL:(id)arg1;
+ (id)newEffectWithData:(id)arg1;
+ (id)newEffectWithData:(id)arg1;
+ (void)clearPreviewStats;
+ (void)runDeferredRegistration;
+ (void)ensureEffectsRegistered;
+ (id)_effectRegistry;
+ (id)_effectRegistryForLookup;
+ (id)_registryEntryForEffectID:(id)arg1;
+ (id)allRegisteredEffectIDs;
+ (Class)classForEffectID:(id)arg1;
+ (void)appFinishedLaunching:(id)arg1;
+ (void)deferEffectRegistrationForClass:(Class)arg1;
+ (id)userVisibleEffectIDs;
+ (id)registeredEffectIDsForEffectTypes:(id)arg1;
+ (id)firstRegisteredEffectIDContainingSubstring:(id)arg1;
+ (id)registeredEffectIDsForClass:(Class)arg1;
+ (id)displayNameForEffectType:(id)arg1;
+ (id)themeForEffectID:(id)arg1;
+ (id)descriptionForEffectID:(id)arg1;
+ (_Bool)isVideoForEffectID:(id)arg1;
+ (id)defaultVideoTransitionEffectID;
+ (id)_registeredEffectClasses;
+ (void)_registerBuiltInEffects;
+ (void)willTerminate:(id)arg1;
+ (void)_registerEffectsInBundle:(id)arg1 atPath:(id)arg2;
+ (void)noteApplicationWillTerminate;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isReady;
- (int)orientation;
- (id)displayName;
- (int)origin;
- (void)releaseResources;
- (struct CGSize)outputSize;
- (id)categoryName;
- (id)effectType;
- (id)effectID;
- (id)initWithEffectID:(id)arg1;
- (void)setInspectableProperty:(id)arg1 forKey:(id)arg2;
- (_Bool)isTextFlipped;
- (id)defaultAttributedString:(unsigned long long)arg1;
- (id)textEditingBounds:(CDStruct_1b6d18a9)arg1;
- (id)textTransforms:(CDStruct_1b6d18a9)arg1;
- (_Bool)textImagePoints:(struct CGPoint *)arg1 textAtIndex:(unsigned long long)arg2 time:(CDStruct_1b6d18a9)arg3 includeDropShadow:(_Bool)arg4;
- (void)disableRenderingTextObjectAtIndex:(unsigned int)arg1;
- (void)enableRenderingTextObjectAtIndex:(unsigned int)arg1;
- (_Bool)supportsFlippingText;
- (_Bool)supportsOrientation;
- (double)topLevelOpacity;
- (_Bool)imagePoints:(struct CGPoint *)arg1 time:(CDStruct_1b6d18a9)arg2 includeDropShadow:(_Bool)arg3;
- (_Bool)imagePointsAtPosterFrameTime:(struct CGPoint *)arg1 componentTime:(CDStruct_1b6d18a9)arg2 includeDropShadow:(_Bool)arg3;
- (_Bool)topLevelGroupBounds:(struct CGRect *)arg1 atTime:(CDStruct_1b6d18a9)arg2 includeDropShadow:(_Bool)arg3 includeMasks:(_Bool)arg4;
- (_Bool)topLevelGroupBoundsAtPosterFrame:(struct CGRect *)arg1 includeDropShadow:(_Bool)arg2 includeMasks:(_Bool)arg3;
- (id)topLevelGroupTransformAtTime:(CDStruct_1b6d18a9)arg1;
- (id)topLevelGroupTransformAtPosterFrame:(CDStruct_1b6d18a9)arg1;
- (_Bool)resourcesAreReady;
- (id)topLevelGroupTransform;
- (_Bool)loadResources;
- (void)updateInspectableProperties:(id)arg1;
- (void)addEntriesToInspectableProperties:(id)arg1;
- (_Bool)loadEffect;
- (void)updateInspectableProperties;
- (HGRef_265f9e4c)previewHGNodeForTime:(CDStruct_1b6d18a9)arg1 inputHGNode:(HGRef_265f9e4c)arg2 outputSize:(struct CGSize)arg3 renderer:(struct HGRenderer *)arg4;
- (HGRef_265f9e4c)hgNodeForTime:(CDStruct_1b6d18a9)arg1 inputs:(const PVInputHGNodeMap_d4d649d7 *)arg2 renderer:(const HGRef_5aef67ae *)arg3 igContext:(HGRef_6bae45d3)arg4;
- (void)releaseEffect;
- (_Bool)supportsExtendedRangeInputs;
- (id)effectDescription;
- (void)_copyWithZone:(struct _NSZone *)arg1 into:(id)arg2;
- (void)_postInit:(id)arg1;
- (void)_decodeFromCoder:(id)arg1 into:(id)arg2;
- (id)inspectablePropertyForKey:(id)arg1;
- (id)descriptionOfInspectableProperties;
- (float)proxyRenderScale;
- (_Bool)textImagePoints:(struct CGPoint *)arg1 textAtIndex:(unsigned long long)arg2 time:(CDStruct_1b6d18a9)arg3;
- (_Bool)imagePoints:(struct CGPoint *)arg1 time:(CDStruct_1b6d18a9)arg2;
- (_Bool)imagePointsAtPosterFrameTime:(struct CGPoint *)arg1 componentTime:(CDStruct_1b6d18a9)arg2;
- (void)setTopLevelGroupTransform:(id)arg1;
- (_Bool)isTranscription;
- (_Bool)shouldRenderPreviewAtPosterTime;
- (void)clearTranscription;
- (void)resetToDefaultTranscriptionForLocaleID:(id)arg1;
- (void)setTranscriptionText:(id)arg1;
- (_Bool)transcriptionHitTest:(struct CGPoint)arg1 time:(CDStruct_1b6d18a9)arg2;
- (_Bool)hasBuiltInEnvironment;
- (_Bool)usesDefaultChannelDataEncoding;
- (_Bool)writeDefaultChannels;
- (void)applyInspectableProperties;

@end
