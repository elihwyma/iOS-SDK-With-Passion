/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <Foundation/NSObject.h>

@interface PFTimeIntervalCoalescer : NSObject

{
    _Atomic long long _sequenceNumber;
    long long _fireSequenceNumber;
}

- (void)dispatch_after:(unsigned long long)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;

@end
