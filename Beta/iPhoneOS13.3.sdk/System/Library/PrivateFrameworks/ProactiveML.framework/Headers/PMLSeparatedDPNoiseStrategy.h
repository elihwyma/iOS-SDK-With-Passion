/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PMLSeparatedDPNoiseStrategy : NSObject

{
    const char *_pflIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)getPFLIdentifier:(id)arg1;

- (id)init;
- (id)toPlistWithChunks:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (void)addNoiseToSparseVector:(id)arg1;
- (void)addNoiseToSparseMatrix:(id)arg1;
- (_Bool)scaleAndAddNoiseToDenseVector:(id)arg1 usingNorm:(_Bool)arg2 scaleFactor:(float *)arg3;
- (id)initWithPFLIdentifier:(const char *)arg1;

@end
