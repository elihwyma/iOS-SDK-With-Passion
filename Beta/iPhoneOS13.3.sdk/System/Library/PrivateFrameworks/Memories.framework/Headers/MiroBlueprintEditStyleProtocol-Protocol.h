/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/Swift-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol MiroBlueprintEditStyleProtocol <Swift>

@property (nonatomic, readonly) NSArray *burstStyleNames;
@property (nonatomic, readonly) NSDictionary *healingEditTransitionDictionary;
@property (nonatomic, readonly) NSArray *transitionsAsDictionaries;
@property (nonatomic, readonly) NSArray *multiUpTransitionsAsDictionaries;
@property (nonatomic, readonly) NSArray *multiUpTransitionDictionaries;
@property (nonatomic, readonly) NSArray *expandedMultiUpTransitionDictionaries;
@property (nonatomic, readonly) double maxZoomLevel;
@property (nonatomic, readonly) _Bool extremeZoomAllowed;
@property (nonatomic, readonly) NSArray *allowedCropTreatments;
@property (nonatomic, readonly) _Bool defaultCameraMotionIsPan;
@property (nonatomic, readonly) _Bool sweepingPansAllowed;
@property (nonatomic, readonly) _Bool centerOnFrame;
@property (nonatomic, readonly) _Bool healingTransitionsAllowed;
@property (nonatomic, readonly) NSString *sequentialNUpEffect;
@property (nonatomic, readonly) double hardCutPercentage;
@property (nonatomic, readonly) double kenBurnsAnyStillPercentage;

@end
