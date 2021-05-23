/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

#import <NeutrinoCore/Swift-Protocol.h>

@class NSMutableData;

@interface NUBrushStroke : NSObject <Swift>

{
    float _radius;
    float _softness;
    float _opacity;
    long long _pressureMode;
    CDStruct_996ac03c _extent;
    NSMutableData *_data;
}

@property (nonatomic, readonly) float radius;
@property (nonatomic, readonly) float softness;
@property (nonatomic, readonly) float opacity;
@property (nonatomic, readonly) long long pressureMode;

+ (id)brushStrokeFromDictionary:(id)arg1;
+ (id)dictionaryFromBrushStroke:(id)arg1;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (CDStruct_996ac03c)extent;
- (long long)pointCount;
- (id)points;
- (CDStruct_869f9c67)pointAtIndex:(long long)arg1;
- (void)_initializeWithRadius:(float)arg1 softness:(float)arg2 opacity:(float)arg3 extent:(CDStruct_996ac03c)arg4 data:(id)arg5 pressureMode:(long long)arg6;
- (id)_createPointArrayFromData:(id)arg1;
- (id)_createDataFromPointArray:(id)arg1;
- (void)_updateExtent;
- (id)ciImageTiled:(_Bool)arg1 closed:(_Bool)arg2 pressureMode:(long long)arg3;
- (void)writeToTIFFAtPath:(id)arg1 closed:(_Bool)arg2 pressureMode:(long long)arg3;

@end
