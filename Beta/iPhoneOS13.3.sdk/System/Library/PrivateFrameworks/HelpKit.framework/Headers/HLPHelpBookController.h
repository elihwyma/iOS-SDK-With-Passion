/*
 Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

#import <HelpKit/HLPRemoteDataController.h>

@class HLPHelpLocale, HLPHelpSectionItem, HLPURLImageCacheController, NSMutableDictionary, NSString, NSURL;

@interface HLPHelpBookController : HLPRemoteDataController

{
    _Bool _hasSectionIcon;
    _Bool _fullBookView;
    long long _contentFormatVersion;
    long long _serverType;
    NSMutableDictionary *_helpItemMap;
    NSString *_contentVersion;
    NSString *_copyrightText;
    NSString *_copyrightTopicIdentifier;
    NSString *_bookId;
    NSString *_topicPathFormat;
    NSString *_remoteSearchPath;
    NSString *_remoteCSSearchIndex;
    NSString *_iconBasePath;
    HLPHelpLocale *_locale;
    NSString *_welcomeTopicIdentifier;
    NSURL *_helpBookURL;
    HLPHelpSectionItem *_rootSectionItem;
    HLPURLImageCacheController *_imageCacheController;
}

@property (nonatomic) long long contentFormatVersion;
@property (nonatomic) long long serverType;
@property (nonatomic, readonly, getter=isSemanticHTML) _Bool semanticHTML;
@property (nonatomic) _Bool hasSectionIcon;
@property (nonatomic) _Bool fullBookView;
@property (retain, nonatomic) NSMutableDictionary *helpItemMap;
@property (retain, nonatomic) NSString *contentVersion;
@property (retain, nonatomic) NSString *copyrightText;
@property (retain, nonatomic) NSString *copyrightTopicIdentifier;
@property (retain, nonatomic) NSString *bookId;
@property (retain, nonatomic) NSString *topicPathFormat;
@property (retain, nonatomic) NSString *remoteSearchPath;
@property (retain, nonatomic) NSString *remoteCSSearchIndex;
@property (retain, nonatomic) NSString *iconBasePath;
@property (retain, nonatomic) HLPHelpLocale *locale;
@property (retain, nonatomic) NSString *welcomeTopicIdentifier;
@property (retain, nonatomic) NSURL *helpBookURL;
@property (retain, nonatomic) HLPHelpSectionItem *rootSectionItem;
@property (retain, nonatomic) HLPURLImageCacheController *imageCacheController;

- (void)dealloc;
- (id)helpTopicItemForID:(id)arg1;
- (void)fetchDataWithDataType:(long long)arg1 identifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)processFileURLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)processData:(id)arg1 formattedData:(id)arg2;
- (id)helpItemForID:(id)arg1;
- (id)dynamicServerSectionsForIdentifiers:(id)arg1 level:(long long)arg2 parent:(id)arg3 tocMap:(id)arg4;
- (id)sectionsForChildrenIdentifiers:(id)arg1 level:(long long)arg2 parent:(id)arg3 sectionsMap:(id)arg4 topicsMap:(id)arg5;
- (id)helpTopicItemForName:(id)arg1;
- (void)addAsideTopic:(id)arg1;
- (id)copyrightTopicItem;
- (id)welcomeTopicItem;

@end
