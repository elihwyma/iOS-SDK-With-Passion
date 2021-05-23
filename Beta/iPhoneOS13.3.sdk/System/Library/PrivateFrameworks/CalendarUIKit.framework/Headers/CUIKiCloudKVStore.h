/*
 Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

#import <NSObject.h>

@class NSDate;

@protocol NSObject><NSCopying><NSCoding;

@interface CUIKiCloudKVStore : NSObject

{
    _Bool _hasConnectedToCarBluetooth;
    NSDate *_lastCarConnectionDate;
    id <NSObject><NSCopying><NSCoding> _ubiquityIdentityToken;
}

@property (retain) id <NSObject><NSCopying><NSCoding> ubiquityIdentityToken;
@property (nonatomic) _Bool hasConnectedToCarBluetooth;
@property (retain, nonatomic) NSDate *lastCarConnectionDate;

+ (_Bool)_haveiCloudKVStoreEntitlement;
+ (id)sharediCloudKVStore;

- (id)init;
- (void)dealloc;
- (void)_storeDidChange:(id)arg1;
- (void)_identityChanged:(id)arg1;
- (_Bool)_canAccessiCloudKVStore;

@end
