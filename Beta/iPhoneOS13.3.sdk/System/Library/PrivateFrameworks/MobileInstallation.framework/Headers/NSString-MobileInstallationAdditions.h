/*
 Image: /System/Library/PrivateFrameworks/MobileInstallation.framework/MobileInstallation
 */

#import <Foundation/NSString.h>

@interface NSString (MobileInstallationAdditions)

@property (readonly) _Bool containsDotDotPathComponents;

+ (id)stringWithFileSystemRepresentation:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)stringWithFileSystemRepresentation:(const char *)arg1;

@end
