/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <Foundation/NSObject.h>

@class PAStackshot;

@interface PAStackshotTask : NSObject

{
    struct task_snapshot *_task_snap;
    PAStackshot *_stackshot;
    long long _bytesUsedByThreads;
    long long _bytesAvailableForThreads;
    unsigned long long _bytesBeforeTask;
    void *_imageInfos;
    void *_mainBinary;
    int *_donationReceivingPids;
}

@property (readonly) int pid;
@property (readonly) const char *name;
@property (readonly) _Bool isDarwinBG;
@property (readonly) _Bool isSuppressed;
@property (readonly) _Bool isForeground;

- (_Bool)isFromMicrostackshot;
- (_Bool)setBufferPosition:(const char *)arg1 withRemainingBytes:(unsigned long long)arg2 withBytesAlreadyUsed:(unsigned long long)arg3;
- (unsigned int)powerstatsFlags;
- (_Bool)setBufferPosition:(const char *)arg1 withRemainingBytes:(unsigned long long)arg2;
- (unsigned long long)bytesUsedInBuffer;
- (unsigned long long)_bytesUsedByImageInfos;
- (unsigned long long)_bytesUsedByDonationReceivingPids;
- (unsigned long long)bytesUsedByHeader;
- (void)iterateThreads:(CDUnknownBlockType)arg1;
- (unsigned long long)bytesUsedByThreads;
- (id)initWithStackshot:(id)arg1;
- (unsigned long long)numImageInfos;
- (struct dyld_uuid_info_64)mainBinary;
- (id)copyImageInfos;
- (id)copyDonationReceivingPids;
- (const struct task_snapshot *)task_snap;

@end
