/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface HFCharacteristicReadLogger : NSObject

{
    NSMutableDictionary *_accessoriesToReadByTransport;
}

@property (retain, nonatomic) NSMutableDictionary *accessoriesToReadByTransport;

+ (id)nameForTransportType:(unsigned long long)arg1;
+ (id)transportKeyForCharacteristic:(id)arg1;

- (id)init;
- (void)addCharacteristic:(id)arg1 withUpdateLogger:(id)arg2;
- (unsigned long long)numberOfAccessoriesForTransportType:(unsigned long long)arg1;
- (void)markCharacteristicAsRead:(id)arg1 withLogger:(id)arg2;

@end
