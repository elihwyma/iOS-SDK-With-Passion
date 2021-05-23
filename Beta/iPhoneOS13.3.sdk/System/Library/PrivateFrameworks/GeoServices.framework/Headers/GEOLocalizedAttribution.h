/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOLocalizedAttribution : PBCodable

{
    PBDataReader *_reader;
    NSString *_displayName;
    NSString *_language;
    NSMutableArray *_logoURLs;
    NSMutableArray *_snippetLogoURLs;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_displayName:1;
        unsigned int read_language:1;
        unsigned int read_logoURLs:1;
        unsigned int read_snippetLogoURLs:1;
        unsigned int wrote_displayName:1;
        unsigned int wrote_language:1;
        unsigned int wrote_logoURLs:1;
        unsigned int wrote_snippetLogoURLs:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (nonatomic, readonly) _Bool hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSMutableArray *logoURLs;
@property (retain, nonatomic) NSMutableArray *snippetLogoURLs;

+ (_Bool)isValid:(id)arg1;
+ (Class)logoURLsType;
+ (Class)snippetLogoURLsType;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)_readLanguage;
- (void)_readDisplayName;
- (void)_readLogoURLs;
- (void)_addNoFlagsLogoURLs:(id)arg1;
- (void)_readSnippetLogoURLs;
- (void)_addNoFlagsSnippetLogoURLs:(id)arg1;
- (unsigned long long)logoURLsCount;
- (void)clearLogoURLs;
- (id)logoURLsAtIndex:(unsigned long long)arg1;
- (void)addLogoURLs:(id)arg1;
- (unsigned long long)snippetLogoURLsCount;
- (void)clearSnippetLogoURLs;
- (id)snippetLogoURLsAtIndex:(unsigned long long)arg1;
- (void)addSnippetLogoURLs:(id)arg1;
- (id)bestURLForLogos:(id)arg1 scale:(double)arg2;

@end
