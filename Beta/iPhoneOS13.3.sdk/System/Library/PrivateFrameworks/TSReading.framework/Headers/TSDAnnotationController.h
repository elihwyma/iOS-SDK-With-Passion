/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TSDAnnotationController : NSObject

@property (nonatomic, readonly) _Bool hasAnnotations;
@property (nonatomic, readonly) NSString *annotationNavigationString;
@property (nonatomic) _Bool textSelectionChangeShouldDismissAnnotations;

- (void)registerDelegate:(id)arg1;
- (void)unregisterDelegate:(id)arg1;
- (void)nextAnnotation:(id)arg1;
- (void)previousAnnotation:(id)arg1;
- (id)annotationNavigationTypeStringUsedForNavigating:(_Bool)arg1;
- (void)willShowAnnotation:(id)arg1;
- (void)didShowAnnotation:(id)arg1;
- (void)commitCommentText:(id)arg1 forAnnotation:(id)arg2;

@end
