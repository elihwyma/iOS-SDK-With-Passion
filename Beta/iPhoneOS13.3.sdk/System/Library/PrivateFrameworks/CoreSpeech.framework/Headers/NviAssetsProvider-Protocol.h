/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/Swift-Protocol.h>

@class NSString;

@protocol NviAssetsProvider <Swift>

@property (nonatomic, readonly) NSString *nviConfigRoot;
@property (nonatomic, readonly) NSString *hepConfigFilepath;

- (unsigned short)init;
- (unsigned short)initWithTaskIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)isDirectionalityLoggingEnabled;
- (unsigned short)signalProvidersMapForContext: /* Error: Ran out of types for this method. */;
- (unsigned short)signalProviderToDatasourceMap;
- (unsigned short)isSignalProviderDisabledInCFPrefs: /* Error: Ran out of types for this method. */;

@end
