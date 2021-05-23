/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface OZFxPlugVersioningAPI : NSObject

{
    struct OZFxPlugSharedBase *_plugin;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithPlugin:(struct OZFxPlugSharedBase *)arg1;
- (unsigned int)versionAtCreation;
- (_Bool)updateVersionAtCreation:(unsigned int)arg1;
- (_Bool)conformsToProtocol:(id)arg1 version:(unsigned int)arg2;

@end
