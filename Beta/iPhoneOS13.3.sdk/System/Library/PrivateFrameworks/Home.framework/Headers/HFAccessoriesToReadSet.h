/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSNumber;

@interface HFAccessoriesToReadSet : NSObject

{
    NSMutableDictionary *_accessories;
    NSNumber *_transportKey;
}

@property (retain, nonatomic) NSMutableDictionary *accessories;
@property (retain, nonatomic) NSNumber *transportKey;

- (long long)count;
- (id)initWithTransportType:(id)arg1;
- (void)markCharacteristicAsRead:(id)arg1 withLogger:(id)arg2;
- (void)addCharacteristic:(id)arg1;

@end
