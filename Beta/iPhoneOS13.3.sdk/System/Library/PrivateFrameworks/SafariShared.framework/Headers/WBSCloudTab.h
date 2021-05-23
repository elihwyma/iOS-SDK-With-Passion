/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, NSURL, NSUUID;

@interface WBSCloudTab : NSObject

{
    _Bool _matchedLastSearch;
    _Bool _isShowingReader;
    _Bool _pinned;
    NSString *_titleForLastSearch;
    NSArray *_titleWords;
    NSString *_URLStringForLastSearch;
    NSArray *_URLStringComponents;
    NSString *_lastSearchTerm;
    NSDictionary *_readerScrollPositionDictionary;
    NSString *_title;
    NSURL *_url;
    NSUUID *_uuid;
    NSString *_sceneID;
}

@property (nonatomic) _Bool isShowingReader;
@property (copy, nonatomic) NSDictionary *readerScrollPositionDictionary;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSUUID *uuid;
@property (nonatomic, getter=isPinned) _Bool pinned;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentationForUserActivityUserInfo;
@property (copy, nonatomic, readonly) NSString *sceneID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *titleForLastSearch;
@property (copy, nonatomic) NSArray *titleWords;
@property (nonatomic, readonly) NSString *URLString;
@property (copy, nonatomic) NSString *URLStringForLastSearch;
@property (copy, nonatomic) NSArray *URLStringComponents;
@property (copy, nonatomic) NSString *lastSearchTerm;
@property (nonatomic) _Bool matchedLastSearch;

+ (id)_dictionaryWithURL:(id)arg1 uuid:(id)arg2 title:(id)arg3 isShowingReader:(_Bool)arg4 readerScrollPosition:(id)arg5 isPinned:(_Bool)arg6 sceneID:(id)arg7;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithURL:(id)arg1 uuid:(id)arg2 title:(id)arg3 isShowingReader:(_Bool)arg4 readerScrollPosition:(id)arg5 sceneID:(id)arg6;
- (id)initWithDictionaryFromUserActivityUserInfo:(id)arg1;
- (id)initWithURL:(id)arg1 uuid:(id)arg2 title:(id)arg3 isShowingReader:(_Bool)arg4 readerScrollPosition:(id)arg5 isPinned:(_Bool)arg6;
- (_Bool)hasSameUUIDAndURLAsTab:(id)arg1;

@end
