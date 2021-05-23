/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface OZFxPlugHostPropertiesAPI : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedHostPropertiesAPI;
+ (void)releaseSharedHostPropertiesAPI;

- (id)hostProperties;
- (_Bool)conformsToProtocol:(id)arg1 version:(unsigned int)arg2;

@end
