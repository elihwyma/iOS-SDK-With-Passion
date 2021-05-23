/*
 Image: /System/Library/PrivateFrameworks/AppleNeuralEngine.framework/AppleNeuralEngine
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSURL, _ANEProgramForEvaluation;

@interface _ANEModel : NSObject

{
    BOOL _queueDepth;
    struct os_unfair_lock_s _l;
    NSURL *_modelURL;
    NSString *_key;
    unsigned long long _string_id;
    unsigned long long _programHandle;
    unsigned long long _intermediateBufferHandle;
    NSDictionary *_modelAttributes;
    _ANEProgramForEvaluation *_program;
}

@property (retain, nonatomic) NSDictionary *modelAttributes;
@property (nonatomic) unsigned long long programHandle;
@property (nonatomic) BOOL queueDepth;
@property (nonatomic) unsigned long long intermediateBufferHandle;
@property (nonatomic) struct os_unfair_lock_s l;
@property (retain, nonatomic) _ANEProgramForEvaluation *program;
@property (nonatomic, readonly) NSURL *modelURL;
@property (copy, nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) unsigned long long string_id;

+ (id)new;
+ (_Bool)supportsSecureCoding;
+ (id)modelAtURL:(id)arg1 key:(id)arg2 modelAttributes:(id)arg3;
+ (id)modelAtURL:(id)arg1 key:(id)arg2;
+ (id)sandboxExtensionPathsForModelURL:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)reset;
- (id)initWithModelAtURL:(id)arg1 key:(id)arg2 modelAttributes:(id)arg3;
- (void)updateModelAttributes:(id)arg1;
- (void)updateModelAttributes:(id)arg1 programHandle:(unsigned long long)arg2 intermediateBufferHandle:(unsigned long long)arg3 queueDepth:(BOOL)arg4;
- (id)keyForBundleID:(id)arg1;

@end
