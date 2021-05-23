/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICRadioContentReference.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSNumber, NSString;

@interface ICRadioLibraryTrackContentReference : ICRadioContentReference <Swift>

{
    NSString *_albumArtistName;
    NSString *_albumName;
    NSString *_artistName;
    NSString *_composerName;
    NSString *_copyright;
    NSString *_genreName;
    NSString *_kind;
    NSString *_name;
    NSNumber *_discCount;
    NSNumber *_discNumber;
    NSNumber *_fileSize;
    NSNumber *_compilation;
    NSNumber *_duration;
    NSNumber *_storeAdamIdentifier;
    NSNumber *_storeCloudIdentifier;
    NSNumber *_trackCount;
    NSNumber *_trackNumber;
    NSNumber *_year;
}

@property (copy, nonatomic) NSString *albumArtistName;
@property (copy, nonatomic) NSString *albumName;
@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSString *composerName;
@property (copy, nonatomic) NSString *copyright;
@property (copy, nonatomic) NSNumber *discCount;
@property (copy, nonatomic) NSNumber *discNumber;
@property (copy, nonatomic) NSNumber *fileSize;
@property (copy, nonatomic) NSString *genreName;
@property (copy, nonatomic, getter=isCompilation) NSNumber *compilation;
@property (copy, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSString *kind;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *storeAdamIdentifier;
@property (copy, nonatomic) NSNumber *storeCloudIdentifier;
@property (copy, nonatomic) NSNumber *trackCount;
@property (copy, nonatomic) NSNumber *trackNumber;
@property (copy, nonatomic) NSNumber *year;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)contentType;
- (id)matchDictionary;

@end
