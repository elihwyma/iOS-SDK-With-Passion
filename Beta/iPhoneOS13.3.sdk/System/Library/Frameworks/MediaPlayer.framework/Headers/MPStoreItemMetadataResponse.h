/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class NSArray, NSDate, NSMutableDictionary;

@interface MPStoreItemMetadataResponse : NSObject <Swift>

{
    NSArray *_cacheMissItemIdentifiers;
    NSMutableDictionary *_itemIdentifierToStoreItemMetadata;
    _Bool _finalResponse;
    NSArray *_lastBatchItemIdentifiers;
    NSArray *_requestItemIdentifiers;
}

@property (nonatomic, getter=isFinalResponse) _Bool finalResponse;
@property (copy, nonatomic) NSArray *cacheMissItemIdentifiers;
@property (copy, nonatomic) NSArray *requestItemIdentifiers;
@property (copy, nonatomic) NSArray *lastBatchItemIdentifiers;
@property (copy, nonatomic, readonly) NSArray *itemIdentifiers;
@property (copy, nonatomic, readonly) NSDate *earliestExpirationDate;
@property (nonatomic, readonly, getter=isExpired) _Bool expired;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)storeItemMetadataForItemIdentifier:(id)arg1;
- (id)storeItemMetadataForItemIdentifier:(id)arg1 returningIsFinalMetadata:(_Bool *)arg2;
- (void)setStoreItemMetadata:(id)arg1 forItemIdentifier:(id)arg2;

@end
