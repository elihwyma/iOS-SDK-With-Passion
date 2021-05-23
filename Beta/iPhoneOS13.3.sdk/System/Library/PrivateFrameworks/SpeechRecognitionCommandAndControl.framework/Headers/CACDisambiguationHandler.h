/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface CACDisambiguationHandler : NSObject

{
    NSArray *_labeledElements;
    CDUnknownBlockType _chosenLabeledElementHandler;
}

@property (retain) NSArray *labeledElements;
@property (copy, nonatomic) CDUnknownBlockType chosenLabeledElementHandler;

- (id)initWithLabeledElements:(id)arg1;
- (void)handleChosenLabeledElement:(id)arg1;

@end
