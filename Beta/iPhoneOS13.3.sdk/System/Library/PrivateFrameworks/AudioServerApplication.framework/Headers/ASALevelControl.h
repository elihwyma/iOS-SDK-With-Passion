/*
 Image: /System/Library/PrivateFrameworks/AudioServerApplication.framework/AudioServerApplication
 */

#import <AudioServerApplication/ASAControl.h>

@interface ASALevelControl : ASAControl

@property (nonatomic) float scalarValue;
@property (nonatomic) float decibelValue;
@property (nonatomic, readonly) float minimumDecibelValue;
@property (nonatomic, readonly) float maximumDecibelValue;
@property (nonatomic, readonly) struct AudioValueRange decibelRange;

- (id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(_Bool)arg2;
- (float)decibelFromScalar:(float)arg1;
- (float)scalarFromDecibel:(float)arg1;
- (id)coreAudioClassName;

@end
