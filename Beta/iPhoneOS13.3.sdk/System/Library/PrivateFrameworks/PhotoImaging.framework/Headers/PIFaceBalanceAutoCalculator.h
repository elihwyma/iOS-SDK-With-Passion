/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <NeutrinoCore/NUAutoCalculator.h>

@class NSString;

@interface PIFaceBalanceAutoCalculator : NUAutoCalculator

{
    long long _rawState;
}

@property (readonly) long long rawState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) CDStruct_1b6d18a9 time;

+ (void)calculateRAWWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)calculateWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)faceBalanceResultFromFaceObservations:(id)arg1 request:(id)arg2 error:(out id *)arg3;
+ (CDStruct_996ac03c)faceRectFromNormalizedFaceRet:(struct CGRect)arg1 forImageExtent:(CDStruct_996ac03c)arg2 scaleX:(double)arg3 scaleY:(double)arg4;
+ (CDStruct_7982ab34)faceBalanceFromFaceImage:(id)arg1 forFaceRect:(CDStruct_996ac03c)arg2;

- (void)submit:(CDUnknownBlockType)arg1;
- (id)initWithRequest:(id)arg1 isRAW:(_Bool)arg2;

@end
