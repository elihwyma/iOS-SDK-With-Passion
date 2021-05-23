/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIPlistMediaDatabaseEntity.h>

#import <VideosUI/Swift-Protocol.h>

@class NSArray;

@interface VUIPlistMediaDatabaseShow : VUIPlistMediaDatabaseEntity <Swift>

{
    NSArray *_seasons;
}

@property (retain, nonatomic) NSArray *seasons;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)dictionaryRepresentation;
- (id)isLocal;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (id)seasonForIdentifier:(id)arg1;

@end
