/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class ML3Entity, NSDictionary, NSString;

@interface ML3ArtworkTokenSet : NSObject

{
    ML3Entity *_entity;
    long long _artworkType;
    NSString *_availableArtworkToken;
    NSString *_fetchableArtworkToken;
    long long _fetchableArtworkSourceType;
    NSDictionary *_artworkSourceToTokenMap;
    _Bool _faultedInBestTokens;
    _Bool _faultedInTokens;
    double _retrievalTime;
}

@property (nonatomic) double retrievalTime;
@property (nonatomic, readonly) NSString *availableArtworkToken;
@property (nonatomic, readonly) NSString *fetchableArtworkToken;
@property (nonatomic, readonly) long long fetchableArtworkSourceType;

- (void)_faultInBestTokens;
- (void)_faultInTokens;
- (id)initWithEntity:(id)arg1 artworkType:(long long)arg2;
- (id)artworkTokenForSource:(long long)arg1;

@end
