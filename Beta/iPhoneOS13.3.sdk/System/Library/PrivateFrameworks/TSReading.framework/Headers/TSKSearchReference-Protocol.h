/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/Swift-Protocol.h>

@class NSArray;

@protocol TSKAnnotation;

@protocol TSKSearchReference <Swift>

@property (nonatomic) struct CGPoint searchReferencePoint;
@property (retain, nonatomic) NSArray *findHighlights;
@property (nonatomic) _Bool pulseHighlight;
@property (nonatomic) _Bool autohideHighlight;
@property (retain, nonatomic) id <TSKAnnotation> annotation;

- (unsigned short)model;
- (unsigned short)selection;
- (unsigned short)commandForReplacingWithString:options: /* Error: Ran out of types for this method. */;
- (unsigned short)searchReferenceForReplacingWithString:options:authorCreatedWithCommand: /* Error: Ran out of types for this method. */;
- (unsigned short)searchReferenceStart;
- (unsigned short)searchReferenceEnd;
- (unsigned short)isReplaceable;

@end
