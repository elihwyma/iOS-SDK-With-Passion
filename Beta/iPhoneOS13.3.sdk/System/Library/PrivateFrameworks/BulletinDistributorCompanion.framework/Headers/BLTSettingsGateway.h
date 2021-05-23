/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class BBSettingsGateway, NSLock;

@interface BLTSettingsGateway : NSObject

{
    BBSettingsGateway *_actualSettingsGateway;
    NSLock *_actualSettingsGatewayLock;
    int _token;
}

+ (_Bool)instancesRespondToSelector:(SEL)arg1;
+ (id)surrogateWithQueue:(id)arg1;

- (void)dealloc;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithQueue:(id)arg1;

@end
