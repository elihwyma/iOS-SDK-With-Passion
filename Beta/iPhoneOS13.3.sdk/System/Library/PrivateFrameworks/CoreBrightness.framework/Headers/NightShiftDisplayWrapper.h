/*
 Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CBContainerProtocol;

__attribute__((visibility("hidden")))
@interface NightShiftDisplayWrapper : NSObject

{
    struct __Display *_display;
    id <CBContainerProtocol> _container;
}

@property (retain) id <CBContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithDisplay:(struct __Display *)arg1;
- (void)setNightShiftFactorDictionary:(id)arg1;
- (id)copyPreferenceForKey:(id)arg1 user:(id)arg2;
- (void)setPreference:(id)arg1 forKey:(id)arg2 user:(id)arg3;

@end
