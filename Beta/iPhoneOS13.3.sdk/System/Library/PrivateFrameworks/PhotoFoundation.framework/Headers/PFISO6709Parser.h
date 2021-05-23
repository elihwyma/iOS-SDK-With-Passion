/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <Foundation/NSObject.h>

@interface PFISO6709Parser : NSObject

+ (_Bool)parseISO6709String:(id)arg1 outLatitude:(double *)arg2 outLongitude:(double *)arg3;
+ (_Bool)parseISO6709String:(id)arg1 outLatitudeNumber:(id *)arg2 outLongitudeNumber:(id *)arg3;

@end
