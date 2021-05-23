/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface ISReview : NSObject

{
    long long _assetType;
    NSString *_body;
    unsigned long long _bodyMaxLength;
    NSURL *_infoURL;
    unsigned long long _itemIdentifier;
    NSString *_nickname;
    _Bool _nicknameIsConfirmed;
    unsigned long long _nicknameMaxLength;
    float _rating;
    NSURL *_submitURL;
    NSString *_title;
    unsigned long long _titleMaxLength;
}

@property (nonatomic, readonly) _Bool hasSavedDraft;
@property (retain, nonatomic) NSString *body;
@property (retain, nonatomic) NSString *nickname;
@property (nonatomic) float rating;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long assetType;
@property (nonatomic) unsigned long long itemIdentifier;
@property (retain, nonatomic) NSURL *infoURL;
@property (retain, nonatomic) NSURL *submitURL;
@property (nonatomic) unsigned long long bodyMaxLength;
@property (nonatomic) _Bool nicknameIsConfirmed;
@property (nonatomic) unsigned long long nicknameMaxLength;
@property (nonatomic) unsigned long long titleMaxLength;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)loadFromDictionary:(id)arg1;
- (_Bool)removeDraft;
- (_Bool)restoreFromDraft;
- (_Bool)saveAsDraft;
- (id)_draftsDirectoryPath;
- (id)_draftFileName;
- (void)mergeWithReview:(id)arg1 preferLocalValues:(_Bool)arg2;

@end
