/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@interface BWZoomDelayBuffer : NSObject

{
    CDStruct_45d4b146 *_zoomRequestBuffer;
    unsigned int _zoomRequestBufferIndex;
    unsigned int _maxZoomDelay;
    unsigned int _currentZoomDelay;
    int _currentZoomDirection;
    int _operatingMode;
}

@property (nonatomic, readonly) unsigned int zoomDelay;
@property (nonatomic) int operatingMode;

- (void)dealloc;
- (id)initWithMaxZoomDelay:(unsigned int)arg1;
- (void)addZoomRequest:(CDStruct_45d4b146)arg1;
- (CDStruct_45d4b146)zoomRequestForISPAppliedZoomFactor:(float)arg1;
- (void)updateZoomDelay:(unsigned int)arg1;

@end
