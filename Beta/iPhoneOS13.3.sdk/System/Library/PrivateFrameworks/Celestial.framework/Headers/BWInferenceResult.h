/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSDictionary, NSString;

@interface BWInferenceResult : NSObject

{
    int _inferenceType;
    CDStruct_1b6d18a9 _timestamp;
    NSDictionary *_inferences;
    NSString *_preventionReason;
}

@property (nonatomic, readonly) int inferenceType;
@property (nonatomic, readonly) CDStruct_1b6d18a9 timestamp;
@property (copy, nonatomic, readonly) NSDictionary *inferences;
@property (copy, nonatomic, readonly) NSString *preventionReason;
@property (nonatomic, readonly, getter=isValid) _Bool valid;

- (void)dealloc;
- (id)initWithInferenceType:(int)arg1 inferences:(id)arg2 preventionReason:(id)arg3 atTimestamp:(CDStruct_1b6d18a9)arg4;
- (id)initWithInferenceType:(int)arg1 inferences:(id)arg2 atTimestamp:(CDStruct_1b6d18a9)arg3;
- (id)initWithInferenceType:(int)arg1 preventionReason:(id)arg2 atTimestamp:(CDStruct_1b6d18a9)arg3;
- (id)initWithResult:(id)arg1 replacementInferences:(id)arg2 replacementPreventionReason:(id)arg3;

@end
