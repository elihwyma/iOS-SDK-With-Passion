/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/Swift-Protocol.h>

@class NSSet, TSKSelection;

@protocol TSDEditor <Swift>

@property (retain, nonatomic) TSKSelection *selection;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingFill;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingStroke;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingShadow;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingReflection;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingOpacity;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingTextInset;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingConnectionLineAttributes;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingEndpoints;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingSmartShapeAttributes;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingResize;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingShrinkTextToFit;

- (unsigned short)documentRoot;

@end
