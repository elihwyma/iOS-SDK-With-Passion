/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <CallKit/CXCallDirectoryPhoneNumberEntryData.h>

#import <CallKit/Swift-Protocol.h>

@class NSMutableData;

@interface CXCallDirectoryMutablePhoneNumberEntryData : CXCallDirectoryPhoneNumberEntryData <Swift>

{
    NSMutableData *_mutablePhoneNumberData;
}

@property (retain, nonatomic) NSMutableData *mutablePhoneNumberData;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)appendPhoneNumber:(long long)arg1;

@end
