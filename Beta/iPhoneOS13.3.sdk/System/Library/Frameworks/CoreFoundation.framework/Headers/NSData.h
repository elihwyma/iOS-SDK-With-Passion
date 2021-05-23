/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSObject.h>

@interface NSData : NSObject

@property (readonly) unsigned long long length;
@property (readonly) const void *bytes;

+ (_Bool)supportsSecureCoding;

@end
