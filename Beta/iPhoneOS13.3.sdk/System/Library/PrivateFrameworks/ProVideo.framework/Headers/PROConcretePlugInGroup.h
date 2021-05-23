/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class NSLock, NSMutableArray, NSMutableDictionary, NSString;

@interface PROConcretePlugInGroup : NSObject

{
    NSMutableArray *plugIns;
    struct __CFUUID *uuidRef;
    NSString *name;
    NSString *displayName;
    NSMutableDictionary *protocols;
    NSLock *mutex;
}

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)name;
- (struct __CFUUID *)uuid;
- (id)displayName;
- (id)uuidString;
- (id)plugInsForProtocols:(id)arg1;
- (id)plugIns;
- (void)addPlugIn:(id)arg1;
- (_Bool)isEqualToPlugInGroup:(id)arg1;
- (id)initWithUUID:(struct __CFUUID *)arg1 name:(id)arg2 bundle:(id)arg3;
- (void)removePlugIn:(id)arg1;

@end
