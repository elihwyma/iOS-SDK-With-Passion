/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@interface PROPlugInGroup : NSObject

+ (id)allocWithZone:(struct _NSZone *)arg1;

- (id)name;
- (struct __CFUUID *)uuid;
- (id)displayName;
- (id)plugInsForProtocols:(id)arg1;
- (id)plugIns;
- (void)addPlugIn:(id)arg1;
- (id)initWithUUID:(struct __CFUUID *)arg1 name:(id)arg2 bundle:(id)arg3;
- (void)removePlugIn:(id)arg1;

@end
