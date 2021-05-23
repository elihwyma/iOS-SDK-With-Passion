/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <NewsUI/Swift-Protocol.h>

@protocol SXAdvertisingSettings;

@protocol NUAdSettings <Swift>

@property (nonatomic, readonly) _Bool debugAdSlotsEnabled;
@property (nonatomic, readonly) _Bool debugInteractivityEnabled;
@property (nonatomic, readonly) id <SXAdvertisingSettings> debugAdvertisementSettings;

@end
