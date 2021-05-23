/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSArray;

@interface BWCaptureDevice : NSObject

@property (nonatomic, readonly) int position;
@property (nonatomic, readonly) struct OpaqueCMClock *clock;
@property (nonatomic, readonly) NSArray *supportedFormats;
@property (nonatomic) float maximumFrameRate;
@property (nonatomic) float minimumFrameRate;

- (int)captureStillImageNowWithSettings:(id)arg1;
- (void)setActiveFormatIndex:(long long)arg1;
- (long long)activeFormatIndex;
- (id)copyCurrentFrameStatistics;
- (id)stillImageCaptureSettingsWithID:(long long)arg1 captureType:(int)arg2 deliverProcessedImage:(_Bool)arg3 deliverOriginalImage:(_Bool)arg4 deliverSushiRaw:(_Bool)arg5 bravoConstituentImageDeliveryDeviceTypes:(id)arg6 includePreBracketedEV0ForProcessing:(_Bool)arg7 clientBracketSettings:(id)arg8 captureFlags:(unsigned long long)arg9 userInitiatedRequestPTS:(CDStruct_1b6d18a9)arg10 frameStatisticsByPortType:(id)arg11;

@end
