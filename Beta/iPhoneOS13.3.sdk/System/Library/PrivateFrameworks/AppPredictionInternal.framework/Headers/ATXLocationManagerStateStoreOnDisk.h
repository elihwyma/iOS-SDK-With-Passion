/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol ATXLocationManagerStateStoreOnDiskEnv;

@interface ATXLocationManagerStateStoreOnDisk : NSObject

{
    NSString *_path;
    id <ATXLocationManagerStateStoreOnDiskEnv> _env;
    CDUnknownBlockType _deferredLoadCallback;
    int _fd;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)clear;
- (void)write:(id)arg1;
- (id)loadNowOrCallLater:(CDUnknownBlockType)arg1;
- (id)initWithPath:(id)arg1 environment:(id)arg2;
- (_Bool)_tryToOpen;
- (void)_deviceDidUnlock;

@end
