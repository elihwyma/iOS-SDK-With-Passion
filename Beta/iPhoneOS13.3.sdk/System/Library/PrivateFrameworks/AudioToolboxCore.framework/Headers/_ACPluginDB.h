/*
 Image: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableDictionary;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _ACPluginDB : NSObject

{
    NSMutableDictionary *mSearchDirectories;
    _Bool mDirty;
    NSObject<OS_dispatch_queue> *mDispatchQueue;
    struct function<void (AudioComponentVector &, AudioComponentVector &)> mNotificationCallback;
    struct function<void ()> mScanHashCallback;
    NSData *mCarbonComponentHash;
}

+ (_Bool)supportsSecureCoding;
+ (id)path;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id).cxx_construct;
- (void)writeIfDirty;
- (struct AudioComponentVector)postInit:(_Bool)arg1;
- (void)initialScanDirectory:(id)arg1 priority:(int)arg2 components:(struct AudioComponentVector *)arg3;

@end
