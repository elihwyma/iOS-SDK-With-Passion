/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

#import <VideosUI/Swift-Protocol.h>

@class NSNumber, NSString, NSURL;

@interface VUIPlistMediaDatabaseEntity : NSObject <Swift>

{
    NSString *_identifier;
    unsigned long long _type;
    NSString *_title;
    NSString *_genreTitle;
    NSString *_contentDescription;
    NSURL *_coverArtURL;
    NSString *_canonicalID;
}

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *genreTitle;
@property (copy, nonatomic) NSString *contentDescription;
@property (copy, nonatomic) NSURL *coverArtURL;
@property (copy, nonatomic) NSString *canonicalID;
@property (copy, nonatomic, readonly, getter=isLocal) NSNumber *local;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (void)_mediaEntityPropertyDidChange:(id)arg1;

@end
