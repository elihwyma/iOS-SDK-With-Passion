/*
 Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

#import <CoreBrightness/CBHIDService.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CBALSService : CBHIDService

{
    _Bool _validData;
    double _lux;
    _Bool _colorSupport;
    double _x;
    double _y;
    double _CCT;
    NSString *_desc;
    unsigned long long _location;
}

@property (readonly) _Bool validData;
@property (readonly) double lux;
@property (readonly) _Bool colorSupport;
@property (readonly) double x;
@property (readonly) double y;
@property (readonly) double CCT;
@property (readonly) unsigned long long location;

- (void)dealloc;
- (id)description;
- (void)setEvent:(struct __IOHIDEvent *)arg1;
- (id)initWithHIDALSServiceClient:(struct __IOHIDServiceClient *)arg1;
- (id)copyDataInDictionary;
- (_Bool)updateEventData;
- (void)resetEventData;

@end
