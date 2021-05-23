/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsTransport/NTPBAsset.h>

#import <NewsCore/Swift-Protocol.h>

@class NSString;

@interface NTPBAsset (KVS) <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (int)keyValuePairType;
+ (id)readValueFromKeyValuePair:(id)arg1;

- (void)writeToKeyValuePair:(id)arg1;

@end
