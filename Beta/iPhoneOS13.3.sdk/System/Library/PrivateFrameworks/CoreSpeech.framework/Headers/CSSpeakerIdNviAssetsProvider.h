/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CSSpeakerIdNviAssetsProvider : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *nviConfigRoot;
@property (nonatomic, readonly) NSString *hepConfigFilepath;

- (id)initWithTaskIdentifier:(id)arg1;
- (float)dirAzimuthEMAParam;
- (_Bool)isDirectionalityLoggingEnabled;
- (id)signalProvidersMapForContext:(id)arg1;
- (id)signalProviderToDatasourceMap;
- (_Bool)isSignalProviderDisabledInCFPrefs:(unsigned long long)arg1;
- (_Bool)isDirectionalityAvailable;

@end
