/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RERelevanceProvider.h>

@interface REBluetoothDeviceRelevanceProvider : RERelevanceProvider

{
    _Bool _connectedToCar;
    _Bool _connectedToSpeaker;
}

@property (nonatomic, readonly) _Bool connectedToCar;
@property (nonatomic, readonly) _Bool connectedToSpeaker;

+ (id)relevanceSimulatorID;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)_hash;
- (id)dictionaryEncoding;
- (id)initWithConnectionToCar:(_Bool)arg1 connectionToSpeaker:(_Bool)arg2;

@end
