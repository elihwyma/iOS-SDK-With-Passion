/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <SearchUI/SearchUIImage.h>

@class NSString;

@interface SearchUIMediaArtworkImage : SearchUIImage

{
    NSString *_persistentID;
    NSString *_spotlightIdentifier;
    long long _mediaEntityType;
}

@property (retain) NSString *persistentID;
@property (retain) NSString *spotlightIdentifier;
@property long long mediaEntityType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (Class)classForCoder;
- (id)initWithSFImage:(id)arg1;
- (void)loadImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithSpotlightIdentifier:(id)arg1;

@end
