/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <Foundation/NSObject.h>

#import <ProactiveML/Swift-Protocol.h>

@class NSString;

@interface PMLImmutableLogisticRegressionModel : NSObject <Swift>

{
    id _backingObject;
    const float *_weights;
    int _length;
    _Bool _intercept;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (float)predict:(id)arg1;
- (_Bool)intercept;
- (id)toPlistWithChunks:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (_Bool)classify:(id)arg1;
- (id)initWithWeights:(id)arg1 intercept:(_Bool)arg2;
- (id)initWithChunk:(id)arg1 intercept:(_Bool)arg2;
- (id)initWithFloatsNoCopy:(const float *)arg1 count:(int)arg2 intercept:(_Bool)arg3;
- (id)toChunk;

@end
