/*
 Image: /System/Library/PrivateFrameworks/AppleNeuralEngine.framework/AppleNeuralEngine
 */

#import <Foundation/NSObject.h>

@class NSArray, NSNumber, _ANEIOSurfaceObject;

@interface _ANERequest : NSObject

{
    NSArray *_inputArray;
    NSArray *_inputIndexArray;
    NSArray *_outputArray;
    NSArray *_outputIndexArray;
    _ANEIOSurfaceObject *_weightsBuffer;
    NSNumber *_procedureIndex;
    CDUnknownBlockType _completionHandler;
}

@property (nonatomic, readonly) NSArray *inputArray;
@property (nonatomic, readonly) NSArray *inputIndexArray;
@property (nonatomic, readonly) NSArray *outputArray;
@property (nonatomic, readonly) NSArray *outputIndexArray;
@property (nonatomic, readonly) _ANEIOSurfaceObject *weightsBuffer;
@property (copy, nonatomic, readonly) NSNumber *procedureIndex;
@property (copy) CDUnknownBlockType completionHandler;

+ (id)requestWithInputs:(id)arg1 inputIndices:(id)arg2 outputs:(id)arg3 outputIndices:(id)arg4 weightsBuffer:(id)arg5 procedureIndex:(id)arg6;
+ (id)requestWithInputs:(id)arg1 inputIndices:(id)arg2 outputs:(id)arg3 outputIndices:(id)arg4 procedureIndex:(id)arg5;

- (id)description;
- (_Bool)validate;
- (id)initWithInputs:(id)arg1 inputIndices:(id)arg2 outputs:(id)arg3 outputIndices:(id)arg4 weightsBuffer:(id)arg5 procedureIndex:(id)arg6;

@end
