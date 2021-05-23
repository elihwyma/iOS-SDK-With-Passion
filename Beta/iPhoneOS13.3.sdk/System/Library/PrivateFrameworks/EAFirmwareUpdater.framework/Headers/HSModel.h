/*
 Image: /System/Library/PrivateFrameworks/EAFirmwareUpdater.framework/EAFirmwareUpdater
 */

#import <Foundation/NSObject.h>

@protocol HSModelDelegate, OS_dispatch_queue;

@interface HSModel : NSObject

{
    id <HSModelDelegate> delegate;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (_Bool)getHSModelForEngineMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 numHSModels:(unsigned long long)arg3 modelBuffer:(char *)arg4 length:(unsigned long long)arg5;

@end
