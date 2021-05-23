/*
 Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface TLITunesTone : NSObject

{
    _Bool _purchased;
    _Bool _ringtone;
    _Bool _protectedContent;
    _Bool _privateTone;
    NSString *_identifier;
    NSString *_name;
    NSString *_albumTitle;
    NSString *_artistName;
    NSString *_genreName;
    NSString *_filePath;
    NSNumber *_syncIdentifier;
    unsigned long long _storeItemIdentifier;
    NSString *_storeFrontIdentifier;
    NSString *_artworkFile;
    double _duration;
    NSNumber *_fadeInDurationNumber;
    NSNumber *_fadeOutDurationNumber;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *albumTitle;
@property (nonatomic, readonly) NSString *artistName;
@property (nonatomic, readonly) NSString *genreName;
@property (nonatomic, readonly) NSString *filePath;
@property (nonatomic, readonly) NSNumber *syncIdentifier;
@property (nonatomic, readonly) unsigned long long storeItemIdentifier;
@property (nonatomic, readonly) NSString *storeFrontIdentifier;
@property (nonatomic, readonly, getter=isPurchased) _Bool purchased;
@property (nonatomic, readonly, getter=isRingtone) _Bool ringtone;
@property (nonatomic, readonly) NSString *artworkFile;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly, getter=isProtectedContent) _Bool protectedContent;
@property (nonatomic, readonly, getter=isPrivateTone) _Bool privateTone;
@property (nonatomic, readonly) NSNumber *fadeInDurationNumber;
@property (nonatomic, readonly) NSNumber *fadeOutDurationNumber;

+ (id)_identifierForPropertyListRepresentation:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithPropertyListRepresentation:(id)arg1 filePath:(id)arg2;
- (_Bool)isDuplicateOfTone:(id)arg1;
- (id)initWithToneStoreDownload:(id)arg1;

@end
