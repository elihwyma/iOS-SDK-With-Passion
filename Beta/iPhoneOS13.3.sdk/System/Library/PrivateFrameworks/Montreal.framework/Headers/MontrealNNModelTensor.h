/*
 Image: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
 */

#import <Montreal/MontrealNNDescription.h>

#import <Montreal/Swift-Protocol.h>

@class NSArray, NSHashTable, NSString;

@interface MontrealNNModelTensor : MontrealNNDescription <Swift>

{
    NSString *_name;
    NSArray *_dimension;
    NSHashTable *_asInput;
    NSHashTable *_asOutput;
}

@property (readonly) NSString *name;
@property (readonly) NSArray *dimension;
@property (readonly) NSHashTable *asInput;
@property (readonly) NSHashTable *asOutput;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)createInputs:(CDStruct_96916c69 *)arg1 inputChunks:(id)arg2 nodeName:(id)arg3;
+ (id)createOutputs:(CDStruct_96916c69 *)arg1 outputChunks:(id)arg2 nodeName:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
- (id)jsonDescription;
- (id)checkForValidity;
- (id)initWithName:(id)arg1 dimension:(id)arg2;
- (unsigned long long)tensorSize;

@end
