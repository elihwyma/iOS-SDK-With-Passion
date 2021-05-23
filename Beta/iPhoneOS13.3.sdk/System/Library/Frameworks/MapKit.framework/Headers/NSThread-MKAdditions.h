/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSThread.h>

@interface NSThread (MKAdditions)

+ (id)_mapkit_networkIOThread;
+ (void)_mapkit_runThread:(id)arg1;

@end
