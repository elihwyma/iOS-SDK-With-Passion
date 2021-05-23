/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class MPIdentifierSet, NSDictionary, NSString;

@interface MPMusicPlayerPlayParameters : NSObject <Swift>

{
    _Bool _libraryContent;
    NSDictionary *_dictionary;
    MPIdentifierSet *_identifiers;
    NSString *_itemKind;
    NSString *_itemID;
}

@property (copy, nonatomic, readonly) MPIdentifierSet *identifiers;
@property (copy, nonatomic, readonly) NSString *itemKind;
@property (nonatomic, readonly, getter=isLibraryContent) _Bool libraryContent;
@property (copy, nonatomic, readonly) NSString *itemID;
@property (copy, nonatomic, readonly) NSDictionary *dictionary;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
