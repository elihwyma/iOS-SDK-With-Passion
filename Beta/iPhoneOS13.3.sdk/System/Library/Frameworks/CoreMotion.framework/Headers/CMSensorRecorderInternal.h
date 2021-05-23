/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface CMSensorRecorderInternal : NSObject

{
    NSObject<OS_dispatch_queue> *fInternalQueue;
    struct CLConnectionClient *fLocationdConnection;
}

- (id)init;
- (void)dealloc;
- (void)teardown;
- (id)newMetaSinceID:(unsigned long long)arg1 forType:(int)arg2;
- (id)newMetaFrom:(double)arg1 to:(double)arg2 forType:(int)arg3;
- (id)newMetaByID:(unsigned long long)arg1 forType:(int)arg2;
- (id)newDataByID:(unsigned long long)arg1 metaID:(unsigned long long)arg2 forType:(int)arg3;
- (id)_newMetaUsingMessage:(const char *)arg1 withIdentifier:(unsigned long long)arg2 forType:(int)arg3;
- (_Bool)writeSensorDataToFile:(id)arg1 from:(double)arg2 to:(double)arg3 forType:(int)arg4;
- (_Bool)setSensorSampleRate:(unsigned int)arg1 forType:(int)arg2;

@end
