/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface AVInternalDeviceList : NSObject

{
    CDUnknownBlockType changeListener;
    NSMutableArray *deviceList;
    struct _opaque_pthread_mutex_t listLock;
}

@property (copy, nonatomic) CDUnknownBlockType changeListener;

+ (id)newDeviceList;
+ (id)defaultDeviceOfType:(unsigned int)arg1;

- (id)init;
- (void)dealloc;
- (void)cleanup;
- (unsigned int)dataSourceControlID;
- (void)notifyDeviceListChanged;
- (id)deviceList;

@end
