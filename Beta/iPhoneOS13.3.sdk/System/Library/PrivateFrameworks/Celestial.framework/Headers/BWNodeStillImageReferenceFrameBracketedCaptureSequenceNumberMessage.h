/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNodeMessage.h>

@interface BWNodeStillImageReferenceFrameBracketedCaptureSequenceNumberMessage : BWNodeMessage

{
    int _referenceFrameBracketedCaptureSequenceNumber;
}

@property (readonly) int referenceFrameBracketedCaptureSequenceNumber;

+ (id)newMessageWithStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg1;

- (id)_initWithStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg1;

@end
