/*
 Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

#import <Foundation/NSObject.h>

@interface ETUtility : NSObject

+ (id)dateFormatWithMilliseconds:(id)arg1;
+ (id)removePrefixFromDestination:(id)arg1;
+ (id)destinationFromMessageIdentifier:(id)arg1 keepPrefix:(_Bool)arg2;
+ (_Bool)isRetailDemo;
+ (_Bool)shouldArchiveSentMessages;
+ (long long)lastInteractiveZoomLevel;
+ (id)imageWithEllipseDiameter:(double)arg1 strokeWidth:(double)arg2 strokeColor:(id)arg3 fillDiameter:(double)arg4 fillColor:(id)arg5 edgeOverlap:(double)arg6;

@end
