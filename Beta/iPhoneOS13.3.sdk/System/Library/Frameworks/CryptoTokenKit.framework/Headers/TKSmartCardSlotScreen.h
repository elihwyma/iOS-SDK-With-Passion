/*
 Image: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

#import <NSObject.h>

@interface TKSmartCardSlotScreen : NSObject

{
    long long _physicalColumnCount;
    long long _physicalRowCount;
    long long _virtualColumnCount;
    long long _virtualRowCount;
}

@property long long physicalColumnCount;
@property long long physicalRowCount;
@property long long virtualColumnCount;
@property long long virtualRowCount;

- (_Bool)displayMessage:(id)arg1 x:(long long)arg2 y:(long long)arg3 duration:(double)arg4 clearScreen:(_Bool)arg5;

@end
