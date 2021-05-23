/*
 Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

#import <Foundation/NSString.h>

@interface NSString (InstallCoordinationAdditions)

@property (readonly) _Bool containsDotDotPathComponents;

+ (id)stringWithFileSystemRepresentation:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)stringWithFileSystemRepresentation:(const char *)arg1;

@end
