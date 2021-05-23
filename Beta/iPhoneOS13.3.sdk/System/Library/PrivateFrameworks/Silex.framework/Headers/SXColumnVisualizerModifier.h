/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SXColumnVisualizerModifier : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)modifyDOM:(id)arg1 context:(id)arg2;
- (id)componentStyleWithJSON:(id)arg1;
- (id)componentLayoutWithJSON:(id)arg1;
- (id)containerComponentWithJSON:(id)arg1;

@end
