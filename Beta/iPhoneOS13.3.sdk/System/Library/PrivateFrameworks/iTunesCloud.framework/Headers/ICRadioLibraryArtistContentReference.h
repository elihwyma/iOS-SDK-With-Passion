/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICRadioContentReference.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSNumber, NSString;

@interface ICRadioLibraryArtistContentReference : ICRadioContentReference <Swift>

{
    NSString *_artistName;
    NSNumber *_representativeCloudIdentifier;
    NSNumber *_storeIdentifier;
}

@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSNumber *representativeCloudIdentifier;
@property (copy, nonatomic) NSNumber *storeIdentifier;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)contentType;
- (id)matchDictionary;

@end
