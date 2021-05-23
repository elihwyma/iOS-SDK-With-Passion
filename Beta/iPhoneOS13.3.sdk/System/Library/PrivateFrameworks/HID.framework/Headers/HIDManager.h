/*
 Image: /System/Library/PrivateFrameworks/HID.framework/HID
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface HIDManager : NSObject

{
    struct __IOHIDManager *_manager;
    CDUnknownBlockType _elementHandler;
    CDUnknownBlockType _deviceNotificationHandler;
    CDUnknownBlockType _inputReportHandler;
}

@property (readonly) NSArray *devices;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithOptions:(long long)arg1;
- (void)open;
- (void)close;
- (id)propertyForKey:(id)arg1;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)cancel;
- (void)setDispatchQueue:(id)arg1;
- (void)setCancelHandler:(CDUnknownBlockType)arg1;
- (void)activate;
- (void)setInputElementMatching:(id)arg1;
- (void)setInputElementHandler:(CDUnknownBlockType)arg1;
- (void)setDeviceMatching:(id)arg1;
- (void)setDeviceNotificationHandler:(CDUnknownBlockType)arg1;
- (void)setInputReportHandler:(CDUnknownBlockType)arg1;

@end
