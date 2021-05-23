/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@interface IDSCurrentServerTimePair : NSObject

{
    unsigned long long _initialProcessMachTime;
    unsigned long long _initialServerTimeInNanoSeconds;
}

@property (nonatomic, readonly) unsigned long long initialProcessMachTime;
@property (nonatomic, readonly) unsigned long long initialServerTimeInNanoSeconds;

- (id)initWithInitialProcessMachTime:(unsigned long long)arg1 initialServerTimeInNanoSeconds:(unsigned long long)arg2;

@end
