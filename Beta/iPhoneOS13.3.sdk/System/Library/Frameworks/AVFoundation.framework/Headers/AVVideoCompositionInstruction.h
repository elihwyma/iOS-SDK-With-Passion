/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVVideoCompositionInstructionInternal, NSArray, NSString;

@interface AVVideoCompositionInstruction : NSObject

{
    AVVideoCompositionInstructionInternal *_instruction;
}

@property (nonatomic, readonly) CDStruct_e83c9415 timeRange;
@property (retain, nonatomic, readonly) struct CGColor *backgroundColor;
@property (copy, nonatomic, readonly) NSArray *layerInstructions;
@property (nonatomic, readonly) _Bool enablePostProcessing;
@property (nonatomic, readonly) NSArray *requiredSourceTrackIDs;
@property (nonatomic, readonly) int passthroughTrackID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool containsTweening;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)setBackgroundColor:(struct CGColor *)arg1;
- (void)setTimeRange:(CDStruct_e83c9415)arg1;
- (id)_deepCopy;
- (void)setEnablePostProcessing:(_Bool)arg1;
- (void)_setValuesFromDictionary:(id)arg1;
- (void)setLayerInstructions:(id)arg1;

@end
