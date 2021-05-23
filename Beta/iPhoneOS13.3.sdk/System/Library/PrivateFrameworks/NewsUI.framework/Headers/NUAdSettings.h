/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXAdvertisingSettings;

@interface NUAdSettings : NSObject

{
    _Bool _debugAdSlotsEnabled;
    _Bool _debugInteractivityEnabled;
    id <SXAdvertisingSettings> _debugAdvertisementSettings;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool debugAdSlotsEnabled;
@property (nonatomic, readonly) _Bool debugInteractivityEnabled;
@property (nonatomic, readonly) id <SXAdvertisingSettings> debugAdvertisementSettings;

- (id)initWithDebugAdSlotsEnabled:(_Bool)arg1 debugInteractivityEnabled:(_Bool)arg2 debugAdvertisementSettings:(id)arg3;

@end
