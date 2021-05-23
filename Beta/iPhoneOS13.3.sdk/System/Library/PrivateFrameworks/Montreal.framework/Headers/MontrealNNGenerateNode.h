/*
 Image: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
 */

#import <NSObject.h>

@class MontrealNNModelNode;

@interface MontrealNNGenerateNode : NSObject

{
    unsigned long long _weightIter;
    MontrealNNModelNode *_node;
    unsigned long long _weightDataFormat;
    CDStruct_96916c69 _parameters;
}

@property (readonly) CDStruct_96916c69 parameters;
@property (readonly) unsigned long long weightIter;
@property (readonly) MontrealNNModelNode *node;
@property (readonly) unsigned long long weightDataFormat;

- (void)setInput:(id)arg1 inputIndex:(long long)arg2;
- (void)setInputs:(id)arg1;
- (id)initWithParameters:(CDStruct_96916c69 *)arg1 weightDataFormat:(unsigned long long)arg2;
- (unsigned long long)generateNode:(id)arg1 node:(id)arg2 weightIter:(unsigned long long)arg3 inputs:(id)arg4 outputs:(id)arg5;
- (id)dataFromWeights:(float *)arg1 length:(unsigned long long)arg2;

@end
