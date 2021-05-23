/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HMFoundation/HMFObject.h>

#import <HomeKitBackingStore/Swift-Protocol.h>

@class NSString;

@interface HMBCloudZoneRebuilderStatus : HMFObject <Swift>

{
    long long _keyStatus;
    NSString *_message;
    unsigned long long _rebuildState;
}

@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) unsigned long long rebuildState;
@property (nonatomic, readonly) long long keyStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)rebuilderStateString:(unsigned long long)arg1;
+ (id)keyStatusString:(long long)arg1;
+ (id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id *)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)attributeDescriptions;
- (id)initWithState:(unsigned long long)arg1 message:(id)arg2;
- (id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id *)arg2;

@end
