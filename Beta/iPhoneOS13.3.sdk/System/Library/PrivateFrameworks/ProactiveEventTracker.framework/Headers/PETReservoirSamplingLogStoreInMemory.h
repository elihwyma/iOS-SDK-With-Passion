/*
 Image: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
 */

#import <Foundation/NSObject.h>

@class NSMutableData, NSString;

@interface PETReservoirSamplingLogStoreInMemory : NSObject

{
    NSMutableData *_data;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)lock;
- (void)unlock;
- (unsigned long long)currentLength;
- (CDStruct_39420a03 *)remap:(unsigned long long *)arg1;
- (CDStruct_39420a03 *)headerMap:(unsigned long long *)arg1;
- (_Bool)changeLength:(unsigned long long)arg1;
- (_Bool)appendData:(id)arg1 andReturnMapPointer:(struct **)arg2;
- (_Bool)attemptToRecreate;

@end
