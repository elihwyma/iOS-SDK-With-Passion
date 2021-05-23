/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSObject.h>

@class NSCountedSet, NSString;

@interface AKStatistics : NSObject

{
    NSString *_documentType;
    NSString *_clientPrefix;
    NSCountedSet *_annotationsCounts;
}

@property (retain, nonatomic) NSCountedSet *annotationsCounts;
@property (retain, nonatomic) NSString *documentType;
@property (retain, nonatomic) NSString *clientPrefix;

+ (id)nameForAnnotation:(id)arg1;
+ (id)nameForClassName:(id)arg1;

- (void)logShapeDetectionHUDShown;
- (void)logShapeDetectionHUDPickedShape:(id)arg1;
- (void)logInkAnnotationStrokeAdded:(id)arg1;
- (void)resetLogging;
- (void)logDocumentSaved;
- (void)logAnnotationAdded:(id)arg1;

@end
