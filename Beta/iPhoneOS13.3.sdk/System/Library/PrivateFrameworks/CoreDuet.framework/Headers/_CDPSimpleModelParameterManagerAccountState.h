/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, _CDPModelTuningState, _CDPSimpleModelParameterManagerTuningValue;

@interface _CDPSimpleModelParameterManagerAccountState : NSObject

{
    _CDPSimpleModelParameterManagerTuningValue *_previousBestTuningValue;
    NSMutableArray *_tuningValues;
    _CDPModelTuningState *_lastTuningState;
}

@property (retain, nonatomic) _CDPSimpleModelParameterManagerTuningValue *previousBestTuningValue;
@property (retain, nonatomic) NSMutableArray *tuningValues;
@property (retain, nonatomic) _CDPModelTuningState *lastTuningState;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
