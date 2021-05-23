/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/_MRContentItemProtobuf.h>

@class MRContentItemMetadata;

__attribute__((visibility("hidden")))
@interface MRContentItem : _MRContentItemProtobuf

@property (nonatomic, readonly) MRContentItemMetadata *itemMetadata;
@property (nonatomic, readonly) _Bool hasCurrentLanguageOptions;
@property (nonatomic, readonly) _Bool hasAvailableLanguageOptions;

+ (void)initialize;

- (id)init;
- (id)initWithData:(id)arg1;
- (void)setSections:(id)arg1;
- (void)setInfo:(id)arg1;
- (void)setArtworkData:(id)arg1;
- (void)setAvailableLanguageOptions:(id)arg1;
- (void)setCurrentLanguageOptions:(id)arg1;
- (void)setLyrics:(id)arg1;
- (id)customDictionaryRepresentation;

@end
