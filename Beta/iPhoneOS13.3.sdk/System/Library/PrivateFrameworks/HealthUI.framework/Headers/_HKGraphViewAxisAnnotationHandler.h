/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSString;

@interface _HKGraphViewAxisAnnotationHandler : NSObject

{
    _Bool _disableDuringTiling;
    _Bool _clearedPreviousAnnotations;
    NSMapTable *_seriesToAnnotations;
}

@property (retain, nonatomic) NSMapTable *seriesToAnnotations;
@property (nonatomic) _Bool clearedPreviousAnnotations;
@property (nonatomic) _Bool disableDuringTiling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)addAxisAnnotation:(id)arg1 forSeries:(id)arg2 textColor:(id)arg3 modelCoordinate:(id)arg4;
- (void)clearAxisAnnotations;
- (void)startAnnotationSequence;
- (long long)applyAnnotationForSeries:(id)arg1 commonAxes:(id)arg2;

@end
