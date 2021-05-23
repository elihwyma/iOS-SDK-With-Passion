/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface PXTransition : NSObject

+ (id)transitionNodeMap;
+ (int)readOrientation:(struct _xmlNode *)arg1 attribute:(const char *)arg2 defaultValue:(int)arg3;
+ (int)readDirection:(struct _xmlNode *)arg1 defaultValue:(int)arg2;
+ (int)readReverseDirection:(struct _xmlNode *)arg1 defaultValue:(int)arg2;
+ (int)readInOut:(struct _xmlNode *)arg1 defaultValue:(int)arg2;
+ (_Bool)mapDirection:(id)arg1 outDir:(int *)arg2;
+ (void)writeReverseOrientation:(int)arg1 withAttributeName:(id)arg2 file:(id)arg3;
+ (void)writeOrientation:(int)arg1 withAttributeName:(id)arg2 file:(id)arg3;
+ (void)writeDirection:(int)arg1 file:(id)arg2;
+ (void)writeReverseDirection:(int)arg1 file:(id)arg2;
+ (void)writeInOut:(int)arg1 file:(id)arg2;
+ (void)writeReverseInOut:(int)arg1 file:(id)arg2;
+ (void)writeTransitionAttributes:(id)arg1 attributePrefix:(id)arg2 file:(id)arg3;
+ (_Bool)isPowerPoint2013TransitionType:(int)arg1;
+ (void)writeTransitionOptions:(id)arg1 transitionType:(int)arg2 file:(id)arg3;
+ (_Bool)isPowerPoint2010TransitionType:(int)arg1;
+ (id)directionAttributeMap;
+ (id)reverseDirectionAttributeMap;
+ (void)readTransitionFromNode:(struct _xmlNode *)arg1 tgtTransition:(id)arg2 drawingState:(id)arg3;
+ (void)writeTransitionFromSlideBase:(id)arg1 file:(id)arg2 state:(id)arg3;

@end
