/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class PAEKeyerAutokeySetup, PAEKeyerHistogram;

@interface PAEKeyerAutokeySetupUtil : NSObject

{
    id _apiManager;
    PAEKeyerAutokeySetup *_autokeySetup;
    PAEKeyerHistogram *_keyerHistogram;
    id _actionAPI;
    id _getAPI;
    id _setAPI;
}

- (void)dealloc;
- (void)setHistogram:(struct ColorHisto *)arg1;
- (void)syncWithDB;
- (id)initWithAPIManager:(id)arg1;
- (void)getDataFromDB;
- (id)getInitialSamples;
- (int)getSamplesNb;
- (struct Vec3f)getInitialSample:(int)arg1;
- (struct ColorHisto *)getHistogram;
- (void)syncWithDBAsDefault;
- (void)delInitialSample:(int)arg1;
- (void)clearInitialSamples;
- (void)addInitialSample:(struct Vec3f *)arg1;
- (void)fillAutokeySamplesArray:(vector_ff5abfb7 *)arg1;

@end
