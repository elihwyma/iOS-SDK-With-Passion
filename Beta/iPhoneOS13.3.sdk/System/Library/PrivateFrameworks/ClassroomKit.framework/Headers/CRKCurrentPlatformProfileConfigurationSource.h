/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CRKConfigurationSource;

@interface CRKCurrentPlatformProfileConfigurationSource : NSObject

{
    id <CRKConfigurationSource> mBaseSource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithCallbackQueue:(id)arg1;
- (void)setConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchConfiguration:(CDUnknownBlockType)arg1;
- (id)makeSourceForCurrentPlatformWithCallbackQueue:(id)arg1;
- (id)makeiOSConfigurationSourceWithCallbackQueue:(id)arg1;
- (id)makeMacOSConfigurationSourceWithCallbackQueue:(id)arg1;

@end
