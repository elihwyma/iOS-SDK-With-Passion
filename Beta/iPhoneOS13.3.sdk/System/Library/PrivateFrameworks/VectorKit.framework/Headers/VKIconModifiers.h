/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@interface VKIconModifiers : NSObject

{
    struct IconModifiers _iconModifiers;
    _Bool _interactive;
    _Bool _nightMode;
    _Bool _navMode;
    _Bool _transitMode;
    _Bool _searchResult;
    long long _zoom;
    unsigned long long _variant;
    unsigned long long _countryCode;
}

@property (nonatomic) _Bool nightMode;
@property (nonatomic) _Bool transitMode;
@property (nonatomic) _Bool navMode;
@property (nonatomic) _Bool interactive;
@property (nonatomic, getter=isSearchResult) _Bool searchResult;
@property (nonatomic) long long zoom;
@property (nonatomic) unsigned long long variant;
@property (nonatomic) unsigned long long countryCode;

- (id)init;
- (id).cxx_construct;
- (void)setText:(id)arg1;
- (void)setGlyphOnly:(_Bool)arg1;
- (void)setTransitLineColor:(CDStruct_83984b6f)arg1;
- (struct IconModifiers *)cppModifiers;
- (id)initWithModifiers:(const struct IconModifiers *)arg1;

@end
