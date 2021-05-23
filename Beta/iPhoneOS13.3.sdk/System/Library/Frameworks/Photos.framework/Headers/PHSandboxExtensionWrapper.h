/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PHSandboxExtensionWrapper : NSObject

{
    NSString *_token;
    long long _handle;
}

+ (id)wrapperWithToken:(id)arg1;

- (void)dealloc;

@end
