/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/Swift-Protocol.h>

@protocol FxTransition <Swift>

- (unsigned short)frameCleanup;
- (unsigned short)frameSetup:inputInfoA:inputInfoB:timeFraction:hardware:software: /* Error: Ran out of types for this method. */;
- (unsigned short)getOutputWidth:height:withInputA:withInputB:withTimeFraction:withInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)renderOutput:withInputA:withInputB:withTimeFraction:withInfo: /* Error: Ran out of types for this method. */;

@end
