/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@interface NUQOSMeter : NSObject

{
    _Atomic long long _counts[4];
    _Atomic long long _total;
}

- (id)description;
- (_Bool)log:(long long)arg1;
- (void)recordQOS;

@end
