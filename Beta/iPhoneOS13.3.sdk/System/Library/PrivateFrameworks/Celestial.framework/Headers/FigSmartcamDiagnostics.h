/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FigSmartcamDiagnostics : NSObject

{
    NSMutableDictionary *_metadata;
}

- (id)init;
- (id)metadata;
- (_Bool)addMotionStats:(CDStruct_4d1c11a6)arg1;
- (void)addSceneConfidences:(id)arg1;
- (void)addPAMDecisionPreliminary:(id)arg1;
- (_Bool)addClassifierVersionMajor:(unsigned short)arg1 minor:(unsigned short)arg2 patch:(unsigned short)arg3;

@end
