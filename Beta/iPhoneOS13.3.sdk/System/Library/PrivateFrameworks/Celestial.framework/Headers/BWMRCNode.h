/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@class NSArray, NSDictionary, NSString;

@interface BWMRCNode : BWNode

{
    CDUnknownFunctionPointerType _createSampleBufferProcessorFunction;
    struct OpaqueFigSampleBufferProcessor *_sampleBufferProcessor;
    NSArray *_symbologiesArray;
    NSArray *_mrcIdentifiers;
    long long _lastMRCCount;
    struct CGRect _rectOfInterest;
    struct os_unfair_lock_s _rectOfInterestLock;
    _Bool _hasPendingRectOfInterestUpdate;
    _Bool _lowPowerModeEnabled;
    _Bool _usesSceneClassifierToGateQRCodeDetection;
    _Bool _sceneLikelyToHaveQRCodes;
    struct os_unfair_lock_s _sceneLock;
    struct BWSmartCameraScene _qrCodeScene;
    struct BWSmartCameraScene _documentScene;
    NSDictionary *_metadataIdentifierToSymbologyDictionary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (id)nodeType;
- (struct CGRect)rectOfInterest;
- (void)setRectOfInterest:(struct CGRect)arg1;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (int)_setupSampleBufferProcessor;
- (id)_newSymbologiesArrayFromIdentifiers:(id)arg1;
- (void)_teardownSampleBufferProcessor;
- (_Bool)_shouldEmitSBufForBarcodeCount:(long long)arg1;
- (void)sceneConfidenceDidChangeForQR:(float)arg1 document:(float)arg2;
- (id)initUsingSceneClassifierQRCodeDetectionVersion:(CDStruct_08002bce)arg1;
- (void)setMrcIdentifiers:(id)arg1;
- (id)mrcIdentifiers;
- (void)setLowPowerModeEnabled:(_Bool)arg1;
- (_Bool)lowPowerModeEnabled;

@end
