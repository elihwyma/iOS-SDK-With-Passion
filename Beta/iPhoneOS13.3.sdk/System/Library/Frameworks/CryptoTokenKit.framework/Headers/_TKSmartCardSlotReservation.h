/*
 Image: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

#import <NSObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface _TKSmartCardSlotReservation : NSObject

{
    _Bool _exclusive;
    NSNumber *_protocols;
}

@property (retain) NSNumber *protocols;
@property _Bool exclusive;

@end
