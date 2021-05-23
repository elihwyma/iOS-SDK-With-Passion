/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface OZFxPlugProgressAPI : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedProgressAPI;
+ (void)releaseSharedProgressAPI;

- (id)init;
- (_Bool)updateProgress:(float)arg1;
- (_Bool)conformsToProtocol:(id)arg1 version:(unsigned int)arg2;
- (_Bool)userHasCancelled;
- (void)_setControl:(const struct OZProcessControl *)arg1;

@end
