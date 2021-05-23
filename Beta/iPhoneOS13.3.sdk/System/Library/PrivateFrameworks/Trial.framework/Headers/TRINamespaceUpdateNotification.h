/*
 Image: /System/Library/PrivateFrameworks/Trial.framework/Trial
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TRINamespaceUpdateNotification : NSObject

{
    unsigned int _namespaceId;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned int namespaceId;

+ (id)notificationNameForNamespaceId:(unsigned int)arg1;
+ (id)registerUpdateForNamespaceId:(unsigned int)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (void)deregisterUpdateWithToken:(id)arg1;
+ (_Bool)notifyUpdateForNamespaceId:(unsigned int)arg1;

- (id)initWithNamespaceId:(unsigned int)arg1;

@end
