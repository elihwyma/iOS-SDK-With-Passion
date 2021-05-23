/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@interface WLKProcessInfo : NSObject

{
    struct __SecTask *_currentTask;
}

@property (nonatomic) struct __SecTask *currentTask;

+ (id)currentProcessInfo;

- (id)init;
- (void)dealloc;
- (id)valueForEntitlement:(id)arg1;
- (_Bool)boolValueForEntitlement:(id)arg1;
- (_Bool)valueForEntitlement:(id)arg1 containsObject:(id)arg2;

@end
