/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/KonaClip.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ExtraClip : KonaClip

@property (retain, nonatomic, readonly) NSMutableDictionary *extraDefinition;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) double startRatio;
@property (nonatomic) double endRatio;

- (int)maxDuration;
- (int)clipType;
- (_Bool)hasVisualCharacteristic;

@end
