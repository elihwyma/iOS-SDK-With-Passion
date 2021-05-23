/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class CLSensorRecorderSensorMeta, CMSensorRecorderInternal, NSArray, NSMutableArray;

@protocol OS_xpc_object;

@interface CMSensorDataList : NSObject

{
    CMSensorRecorderInternal *fProxy;
    NSObject<OS_xpc_object> *fDataBuffer;
    CLSensorRecorderSensorMeta *fCurrentBlock;
    unsigned long long fCurrentBlockIdentifier;
    long long fCurrentBlockDataIdentifier;
    double fCurrentBlockStartTime;
    unsigned long long fCurrentBlockTimestamp;
    char *fDataBufferPtr;
    unsigned long long fDataBufferLength;
    unsigned long long fCurrentIdentifier;
    unsigned long long fStartingIdentifier;
    long long fRetrievedDataBufferIdentifier;
    unsigned long long fBlockOffset;
    struct AccelUnpacker fAccelUnpacker;
    struct GyroUnpacker fGyroUnpacker;
    struct PressureUnpacker fPressureUnpacker;
    NSMutableArray *fCachedData;
    NSArray *fMetaArray;
    int fDataType;
}

- (void)dealloc;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id).cxx_construct;
- (void)_updateCurrentBlockProperties;
- (_Bool)_updatePointers;
- (id)initWithIdentifier:(unsigned long long)arg1 andType:(int)arg2;
- (id)initFrom:(double)arg1 to:(double)arg2 withType:(int)arg3;

@end
