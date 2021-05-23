/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

#import <Social/Swift-Protocol.h>

@class NSString;

@interface SLFacebookAlbum : NSObject <Swift>

{
    _Bool _canUpload;
    _Bool _isDefaultAlbum;
    NSString *_identifier;
    NSString *_name;
    NSString *_coverPhotoIdentifier;
    long long _count;
}

@property (retain) NSString *identifier;
@property (retain) NSString *name;
@property (retain) NSString *coverPhotoIdentifier;
@property long long count;
@property _Bool canUpload;
@property _Bool isDefaultAlbum;

+ (_Bool)supportsSecureCoding;
+ (id)albumsWithAlbumDataDictionaries:(id)arg1;
+ (id)albumWithDataDictionary:(id)arg1;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
