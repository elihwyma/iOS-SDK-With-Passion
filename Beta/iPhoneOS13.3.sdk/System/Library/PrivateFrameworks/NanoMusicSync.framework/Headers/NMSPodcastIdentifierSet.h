/*
 Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface NMSPodcastIdentifierSet : NSObject

{
    NSNumber *_storeID;
    NSString *_feedURL;
}

@property (nonatomic, readonly) NSNumber *storeID;
@property (nonatomic, readonly) NSString *feedURL;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithStoreID:(id)arg1 feedURL:(id)arg2;
- (_Bool)isEqualToPodcastIdentifierSet:(id)arg1;

@end
