/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface MSASAlbum : NSObject

{
    _Bool _ownerIsWhitelisted;
    _Bool _isFamilySharedAlbum;
    int _relationshipState;
    NSString *_ownerEmail;
    NSString *_ownerPersonID;
    NSString *_ownerFullName;
    NSString *_ownerFirstName;
    NSString *_ownerLastName;
    NSDate *_subscriptionDate;
    NSString *_GUID;
    NSString *_ctag;
    NSString *_foreignCtag;
    NSString *_URLString;
    NSString *_publicURLString;
    NSDictionary *_metadata;
    id _context;
}

@property (retain, nonatomic) NSString *ownerEmail;
@property (retain, nonatomic) NSString *ownerFullName;
@property (retain, nonatomic) NSString *ownerPersonID;
@property (retain, nonatomic) NSString *ownerFirstName;
@property (retain, nonatomic) NSString *ownerLastName;
@property (nonatomic) _Bool ownerIsWhitelisted;
@property (retain, nonatomic) NSDate *subscriptionDate;
@property (retain, nonatomic) NSString *GUID;
@property (retain, nonatomic) NSString *ctag;
@property (nonatomic) int relationshipState;
@property (retain, nonatomic) NSString *foreignCtag;
@property (retain, nonatomic) NSString *URLString;
@property (retain, nonatomic) NSString *publicURLString;
@property (retain, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) id context;
@property (nonatomic) _Bool isFamilySharedAlbum;
@property (nonatomic, readonly) _Bool useForeignCtag;

+ (_Bool)supportsSecureCoding;
+ (id)album;
+ (id)albumWithAlbum:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;
- (id)metadataValueForKey:(id)arg1;

@end
