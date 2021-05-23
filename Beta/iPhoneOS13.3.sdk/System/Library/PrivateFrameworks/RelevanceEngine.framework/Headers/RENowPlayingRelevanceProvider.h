/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RERelevanceProvider.h>

@class NSString;

@interface RENowPlayingRelevanceProvider : RERelevanceProvider

{
    unsigned long long _state;
    NSString *_bundleIdentifier;
    NSString *_itemIdentifer;
}

@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *itemIdentifer;

+ (id)relevanceSimulatorID;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)_hash;
- (id)initWithState:(unsigned long long)arg1;
- (id)dictionaryEncoding;
- (id)initWithState:(unsigned long long)arg1 bundleIdentifier:(id)arg2 itemIdentifier:(id)arg3;

@end
