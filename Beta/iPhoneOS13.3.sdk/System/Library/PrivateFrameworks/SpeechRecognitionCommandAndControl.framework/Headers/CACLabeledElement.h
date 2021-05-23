/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <Foundation/NSObject.h>

#import <SpeechRecognitionCommandAndControl/Swift-Protocol.h>

@class AXElement, CACTextMarkerRange, NSArray, NSString;

@interface CACLabeledElement : NSObject <Swift>

{
    AXElement *_element;
    NSArray *_recognitionStrings;
    NSString *_numberedLabel;
    NSString *_axIdentifier;
    struct CGRect _rectangle;
    struct CGRect _labelRectangle;
    CACTextMarkerRange *_textMarkerRange;
    _Bool _hasBeenCollected;
    long long _arrowOrientation;
    long long _badgePresentation;
}

@property (nonatomic, readonly) NSString *unfilteredRecognitionLabel;
@property (nonatomic, readonly) NSString *recognitionLabel;
@property (nonatomic, readonly) NSString *fullLabel;
@property (nonatomic, readonly) NSString *valueLabel;
@property (nonatomic, readonly) NSString *numberedLabel;
@property (nonatomic, readonly) unsigned long long traits;
@property (nonatomic, readonly) struct CGRect frame;
@property (nonatomic, readonly) struct CGRect rectangle;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSString *elementName;
@property (nonatomic, readonly) struct CGRect elementFrame;
@property (nonatomic, readonly) struct CGSize elementLabelContainerSize;
@property (nonatomic, readonly) NSString *unfilteredRecognitionLabel;
@property (nonatomic, readonly) NSString *recognitionLabel;
@property (nonatomic, readonly) NSString *fullLabel;
@property (nonatomic, readonly) NSString *valueLabel;
@property (nonatomic, readonly) NSString *numberedLabel;
@property (nonatomic, readonly) unsigned long long traits;
@property (nonatomic, readonly) struct CGRect frame;
@property (nonatomic) struct CGRect labelRectangle;
@property (nonatomic, readonly) struct CGRect interfaceOrientedRectangle;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic) long long arrowOrientation;
@property (nonatomic) long long badgePresentation;
@property (retain, nonatomic) AXElement *element;
@property (retain, nonatomic) NSArray *recognitionStrings;
@property (retain, nonatomic) NSString *numberedLabel;
@property (retain, nonatomic) NSString *axIdentifier;
@property (retain, nonatomic) CACTextMarkerRange *textMarkerRange;
@property (nonatomic) struct CGRect rectangle;
@property (nonatomic, readonly) struct CGRect interfaceOrientedRectangle;
@property (nonatomic) struct CGRect labelRectangle;
@property (nonatomic) _Bool hasBeenCollected;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic) long long arrowOrientation;
@property (nonatomic) long long badgePresentation;

- (id)description;
- (struct CGPoint)quantizedPosition;
- (id)initWithElement:(id)arg1 recognitionStrings:(id)arg2 rectangle:(struct CGRect)arg3;
- (long long)quantizedPositionCompare:(id)arg1;

@end
