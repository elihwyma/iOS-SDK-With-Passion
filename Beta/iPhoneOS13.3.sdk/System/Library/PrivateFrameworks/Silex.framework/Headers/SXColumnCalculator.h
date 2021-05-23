/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SXColumnCalculator : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)columnLayoutWithViewportSize:(struct CGSize)arg1 constrainedToWidth:(double)arg2 documentLayout:(id)arg3 contentScaleFactor:(double)arg4;
- (id)columnLayoutWithConstrainedViewportSize:(struct CGSize)arg1 viewportSize:(struct CGSize)arg2 documentLayout:(id)arg3;
- (id)columnLayoutWithConstrainedViewportSize:(struct CGSize)arg1 scaledConstrainedViewportSize:(struct CGSize)arg2 viewportSize:(struct CGSize)arg3 documentLayout:(id)arg4 contentScaleFactor:(double)arg5;

@end
