/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface MDLMaterialPropertyNode : NSObject

{
    NSArray *_inputs;
    NSArray *_outputs;
    NSMutableArray *_inputNodes;
    CDUnknownBlockType _evaluationFunction;
    NSString *_name;
}

@property (copy, nonatomic) CDUnknownBlockType evaluationFunction;
@property (nonatomic, readonly) NSArray *inputs;
@property (nonatomic, readonly) NSArray *outputs;
@property (copy, nonatomic) NSString *name;

- (id)initWithInputs:(id)arg1 outputs:(id)arg2 evaluationFunction:(CDUnknownBlockType)arg3;

@end
