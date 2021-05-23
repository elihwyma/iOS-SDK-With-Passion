/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/Swift-Protocol.h>

@protocol SXVideoAdProviding <Swift>

@property (nonatomic, readonly) unsigned long long skipThreshold;
@property (nonatomic, readonly) _Bool hasAction;

- (unsigned short)presentPrivacyStatement;
- (unsigned short)skipped;
- (unsigned short)presentAction;
- (unsigned short)nextVideoStartPlaying;

@end
