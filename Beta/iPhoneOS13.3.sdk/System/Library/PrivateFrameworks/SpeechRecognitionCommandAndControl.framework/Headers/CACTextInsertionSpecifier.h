/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <Foundation/NSObject.h>

@class AXElement, NSDictionary, NSString;

@interface CACTextInsertionSpecifier : NSObject

{
    NSString *_insertedString;
    AXElement *_axElement;
    NSString *_commandIdentifier;
    NSDictionary *_recognizedParams;
    NSString *_insertedCategoryID;
    struct _NSRange _insertedRange;
}

@property (retain) NSString *insertedString;
@property struct _NSRange insertedRange;
@property (retain) AXElement *axElement;
@property (retain) NSString *commandIdentifier;
@property (retain) NSDictionary *recognizedParams;
@property (retain) NSString *insertedCategoryID;

@end
