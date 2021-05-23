/*
 Image: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
 */

#import <Foundation/NSObject.h>

#import <CoreNFC/Swift-Protocol.h>

@class NSData;

@interface NFCVASResponse : NSObject <Swift>

{
    long long _status;
    NSData *_vasData;
    NSData *_mobileToken;
}

@property (nonatomic, readonly) long long status;
@property (retain, nonatomic, readonly) NSData *vasData;
@property (retain, nonatomic, readonly) NSData *mobileToken;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStatus:(long long)arg1 data:(id)arg2 mobileToken:(id)arg3;

@end
