/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@interface NTKSyncSessionMetrics : NSObject

{
    _Bool _isResetSync;
    _Bool _didSucceed;
    unsigned long long _changesSent;
    unsigned long long _bytesSent;
}

@property (nonatomic) _Bool isResetSync;
@property (nonatomic) unsigned long long changesSent;
@property (nonatomic) unsigned long long bytesSent;
@property (nonatomic) _Bool didSucceed;

@end
