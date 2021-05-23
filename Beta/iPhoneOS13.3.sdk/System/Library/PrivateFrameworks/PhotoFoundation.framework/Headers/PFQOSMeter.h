/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <Foundation/NSObject.h>

@interface PFQOSMeter : NSObject

{
    _Atomic unsigned long long _counts[4];
    _Atomic unsigned long long _total;
}

- (id)init;
- (id)description;
- (_Bool)log:(long long)arg1;
- (void)recordQOS;

@end
