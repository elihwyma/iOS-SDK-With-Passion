/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CRKConfigurationSource;

@interface CRKNotifyingConfigurationSource : NSObject

{
    id <CRKConfigurationSource> mBaseSource;
    NSString *mNotificationName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchConfiguration:(CDUnknownBlockType)arg1;
- (id)initWithConfigurationSource:(id)arg1 notificationName:(id)arg2;

@end
