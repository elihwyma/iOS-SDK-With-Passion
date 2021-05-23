/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <Foundation/NSKeyedUnarchiver.h>

@interface NSKeyedUnarchiver (MSUtilities)

+ (id)MSSafeUnarchiveObjectWithData:(id)arg1 outError:(id *)arg2;
+ (id)MSSafeUnarchiveAllowedClasses;
+ (id)MSSafeUnarchiveObjectWithFile:(id)arg1 outError:(id *)arg2;

@end
