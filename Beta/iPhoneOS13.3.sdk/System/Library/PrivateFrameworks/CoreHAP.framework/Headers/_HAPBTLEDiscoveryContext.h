/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class NSMapTable, NSMutableArray;

@interface _HAPBTLEDiscoveryContext : HMFObject

{
    long long _discoveryType;
    NSMutableArray *_discoveringServices;
    NSMutableArray *_discoveringCharacteristics;
    NSMutableArray *_readingCharacteristics;
    NSMutableArray *_discoveringDescriptors;
    NSMutableArray *_readingDescriptors;
    NSMutableArray *_readingSignatureCharacteristics;
    NSMutableArray *_readingSignatureServices;
    NSMapTable *_characteristicSignatures;
    NSMapTable *_serviceSignatures;
    long long _retries;
    CDUnknownBlockType _completionHandler;
}

@property (nonatomic, readonly) long long discoveryType;
@property (nonatomic, readonly) NSMutableArray *discoveringServices;
@property (nonatomic, readonly) NSMutableArray *discoveringCharacteristics;
@property (nonatomic, readonly) NSMutableArray *readingCharacteristics;
@property (nonatomic, readonly) NSMutableArray *discoveringDescriptors;
@property (nonatomic, readonly) NSMutableArray *readingDescriptors;
@property (nonatomic, readonly) NSMutableArray *readingSignatureCharacteristics;
@property (nonatomic, readonly) NSMutableArray *readingSignatureServices;
@property (nonatomic, readonly) NSMapTable *characteristicSignatures;
@property (nonatomic, readonly) NSMapTable *serviceSignatures;
@property (nonatomic) long long retries;
@property (nonatomic, readonly, getter=isComplete) _Bool complete;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;

- (id)init;
- (void)reset;
- (id)initWithDiscoveryType:(long long)arg1;

@end
