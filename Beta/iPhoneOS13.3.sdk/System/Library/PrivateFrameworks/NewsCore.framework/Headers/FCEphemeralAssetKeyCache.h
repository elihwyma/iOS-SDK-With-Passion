/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCThreadSafeMutableDictionary, NSString;

@interface FCEphemeralAssetKeyCache : NSObject

{
    FCThreadSafeMutableDictionary *_dictionary;
}

@property (nonatomic, readonly) FCThreadSafeMutableDictionary *dictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)wrappingKeyForWrappingKeyID:(id)arg1;
- (void)removeAllWrappingKeys;
- (void)setWrappingKey:(id)arg1 forWrappingKeyID:(id)arg2;

@end
