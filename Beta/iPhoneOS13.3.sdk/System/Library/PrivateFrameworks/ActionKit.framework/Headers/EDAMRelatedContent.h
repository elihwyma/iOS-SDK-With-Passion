/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class EDAMContact, NSArray, NSNumber, NSString;

@interface EDAMRelatedContent : FATObject

{
    NSString *_contentId;
    NSString *_title;
    NSString *_url;
    NSString *_sourceId;
    NSString *_sourceUrl;
    NSString *_sourceFaviconUrl;
    NSString *_sourceName;
    NSNumber *_date;
    NSString *_teaser;
    NSArray *_thumbnails;
    NSNumber *_contentType;
    NSNumber *_accessType;
    NSString *_visibleUrl;
    NSString *_clipUrl;
    EDAMContact *_contact;
    NSArray *_authors;
}

@property (retain, nonatomic) NSString *contentId;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *sourceId;
@property (retain, nonatomic) NSString *sourceUrl;
@property (retain, nonatomic) NSString *sourceFaviconUrl;
@property (retain, nonatomic) NSString *sourceName;
@property (retain, nonatomic) NSNumber *date;
@property (retain, nonatomic) NSString *teaser;
@property (retain, nonatomic) NSArray *thumbnails;
@property (retain, nonatomic) NSNumber *contentType;
@property (retain, nonatomic) NSNumber *accessType;
@property (retain, nonatomic) NSString *visibleUrl;
@property (retain, nonatomic) NSString *clipUrl;
@property (retain, nonatomic) EDAMContact *contact;
@property (retain, nonatomic) NSArray *authors;

+ (id)structName;
+ (id)structFields;

@end
