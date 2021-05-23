/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSTaggedPointerStringCStringContainer : NSObject

{
    char cString[16];
}

+ (id)taggedPointerStringCStringContainer;

- (id)retain;
- (oneway void)release;

@end
