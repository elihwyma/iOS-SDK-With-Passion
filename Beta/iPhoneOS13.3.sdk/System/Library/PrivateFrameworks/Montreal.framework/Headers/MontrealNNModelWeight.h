/*
 Image: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
 */

#import <Montreal/MontrealNNDescription.h>

@class MontrealNNModelQuantization, NSArray, NSData, NSNumber, NSString;

@interface MontrealNNModelWeight : MontrealNNDescription

{
    NSString *_name;
    NSNumber *_index;
    NSArray *_dimension;
    NSArray *_weightValues;
    NSData *_weightData;
    MontrealNNModelQuantization *_quantization;
    NSString *_jsonDir;
}

@property (readonly) NSString *name;
@property (readonly) NSNumber *index;
@property (readonly) NSArray *dimension;
@property (readonly) NSArray *weightValues;
@property (readonly) NSData *weightData;
@property (readonly) MontrealNNModelQuantization *quantization;
@property (readonly) NSString *jsonDir;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)description:(id)arg1 indent:(id)arg2;
- (id)jsonDescription;
- (id)checkForValidity;
- (void)generateJSONAtPath:(id)arg1;
- (id)createDataContainer;
- (id)initWithDictionary:(id)arg1 quantization:(id)arg2 jsonDir:(id)arg3;
- (id)initWithName:(id)arg1 index:(id)arg2 dimension:(id)arg3 weightValues:(id)arg4;
- (id)initWithName:(id)arg1 index:(id)arg2 dimension:(id)arg3 weightData:(id)arg4;
- (id)initWithName:(id)arg1 index:(id)arg2 dimension:(id)arg3;
- (id)createflattenWeightsFile:(id)arg1;
- (id)createConvertArrayToData:(id)arg1 quantization:(id)arg2;
- (id)createflattenWeightsHierarchy:(id)arg1;

@end
