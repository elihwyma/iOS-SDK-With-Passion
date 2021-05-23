/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface VKDebugTree : NSObject

{
    struct DebugTreeNode _debugTree;
    bitset_dc343b9a _options;
    NSArray *_nodes;
}

- (void)dealloc;
- (void)setOptions:(id)arg1;
- (id).cxx_construct;
- (void)printTree;
- (id)nodes;
- (void)populateData:(id)arg1;
- (id)logTree;
- (void)_outputTree:(basic_ostream_374c280d *)arg1;
- (id)_serializeValue:(const struct DebugTreeValue *)arg1;
- (optional_6d9a1538)_deserializeValue:(id)arg1;
- (id)_serializeProperty:(const struct DebugTreeProperty *)arg1;
- (id)_serializeNode:(const struct DebugTreeNode *)arg1;
- (optional_a49460a3)_deserializeNode:(id)arg1;
- (optional_bd585142)_deserializeProperty:(id)arg1;
- (id)serializeTree;
- (_Bool)deserializeTree:(id)arg1;
- (void)setOption:(unsigned long long)arg1 value:(_Bool)arg2;
- (void)enableAllOptions;
- (void)disableAllOptions;
- (void)_populateData;
- (void)replaceInternalData:(const struct DebugTreeNode *)arg1;
- (const struct DebugTreeNode *)internalData;
- (id)serializeZippedTree;
- (_Bool)deserializeZippedTree:(id)arg1;

@end
