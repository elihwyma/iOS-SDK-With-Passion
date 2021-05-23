/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAsset, AVAssetReaderInternal, NSArray, NSError;

@interface AVAssetReader : NSObject

{
    AVAssetReaderInternal *_priv;
}

@property (nonatomic, readonly, getter=_figAssetReader) struct OpaqueFigAssetReader *figAssetReader;
@property (nonatomic, getter=_readSingleSample, setter=_setReadSingleSample:) _Bool readSingleSample;
@property (retain, nonatomic, readonly) AVAsset *asset;
@property (readonly) long long status;
@property (readonly) NSError *error;
@property (nonatomic) CDStruct_e83c9415 timeRange;
@property (nonatomic, readonly) NSArray *outputs;

+ (void)initialize;
+ (id)assetReaderWithAsset:(id)arg1 error:(id *)arg2;
+ (id)_errorForOSStatus:(int)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)_failWithError:(id)arg1;
- (_Bool)canAddOutput:(id)arg1;
- (void)addOutput:(id)arg1;
- (id)initWithAsset:(id)arg1 error:(id *)arg2;
- (_Bool)startReading;
- (void)cancelReading;
- (void)_tearDownFigAssetReader;
- (void)_transitionToStatus:(long long)arg1 failureError:(id)arg2;
- (_Bool)_canAddOutput:(id)arg1 exceptionReason:(id *)arg2;
- (void)_outputDidFinish:(id)arg1;
- (void)_handleServerDiedNotification;

@end
