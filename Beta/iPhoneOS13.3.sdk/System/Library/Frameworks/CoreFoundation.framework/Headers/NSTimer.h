/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface NSTimer : NSObject

@property (copy) NSDate *fireDate;
@property (readonly) double timeInterval;
@property double tolerance;
@property (readonly, getter=isValid) _Bool valid;
@property (retain, readonly) id userInfo;

@end
