/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSNumber, NSString;

@interface MLMovieArtist : NSObject

{
    NSMutableDictionary *_dictionary;
}

@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSNumber *ITunesStoreIdentifier;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_setValue:(id)arg1 forKey:(id)arg2;
- (void)_setValueCopy:(id)arg1 forKey:(id)arg2;
- (id)initWithMovieArtistDictionary:(id)arg1;
- (id)copyMovieArtistDictionary;

@end
