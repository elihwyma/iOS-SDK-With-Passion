/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@interface _TVProcessInfo : NSObject

{
    _Bool _hasPrivateEntitlement;
    _Bool _hasiTunesAPIEntitlement;
    _Bool _hasiTunesStoreEntitlement;
    struct __SecTask *_currentTask;
}

@property (nonatomic) struct __SecTask *currentTask;
@property (nonatomic, readonly) _Bool hasPrivateEntitlement;
@property (nonatomic, readonly) _Bool hasiTunesAPIEntitlement;
@property (nonatomic, readonly) _Bool hasiTunesStoreEntitlement;

+ (id)currentProcessInfo;

- (id)init;
- (void)dealloc;
- (id)valueForEntitlement:(id)arg1;
- (_Bool)boolValueForEntitlement:(id)arg1;
- (_Bool)valueForEntitlement:(id)arg1 containsObject:(id)arg2;

@end
