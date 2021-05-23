/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <Foundation/NSObject.h>

#import <NewsFeedLayout/Swift-Protocol.h>

@protocol NFLFeedTileInfo;

@interface NFLRankedLayoutRequest : NSObject <Swift>

{
    _Bool _showAccessoryText;
    NSObject<NFLFeedTileInfo> *_tileInfo;
    unsigned long long _columnSpan;
    long long _cellType;
}

@property (copy, nonatomic, readonly) NSObject<NFLFeedTileInfo> *tileInfo;
@property (nonatomic, readonly) unsigned long long columnSpan;
@property (nonatomic, readonly) long long cellType;
@property (nonatomic, readonly, getter=isShowingAccessoryText) _Bool showAccessoryText;

+ (id)requestWithTileInfo:(id)arg1 columnSpan:(unsigned long long)arg2 cellType:(long long)arg3 showAccessoryText:(_Bool)arg4;
+ (id)requestsWithTileInfo:(id)arg1 columnSpans:(id)arg2 cellType:(long long)arg3 showAccessoryText:(_Bool)arg4;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTileInfo:(id)arg1 columnSpan:(unsigned long long)arg2 cellType:(long long)arg3 showAccessoryText:(_Bool)arg4;

@end
