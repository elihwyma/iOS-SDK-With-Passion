/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SXGradientFactory : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)gradientForColorStops:(id)arg1 angle:(double)arg2;
- (id)colorsFromColorStops:(id)arg1;
- (id)locationsFromColorStops:(id)arg1;

@end
