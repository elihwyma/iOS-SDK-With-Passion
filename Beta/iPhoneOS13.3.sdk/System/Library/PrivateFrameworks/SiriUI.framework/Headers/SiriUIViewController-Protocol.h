/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <SiriUI/Swift-Protocol.h>

@class AceObject;

@protocol SiriUIViewController <Swift>

@property (retain, nonatomic) AceObject *aceObject;
@property (nonatomic, getter=isUtteranceUserInteractionEnabled) _Bool utteranceUserInteractionEnabled;

- (unsigned short)siriWillActivateFromSource: /* Error: Ran out of types for this method. */;
- (unsigned short)siriDidDeactivate;
- (unsigned short)wasAddedToTranscript;

@end
