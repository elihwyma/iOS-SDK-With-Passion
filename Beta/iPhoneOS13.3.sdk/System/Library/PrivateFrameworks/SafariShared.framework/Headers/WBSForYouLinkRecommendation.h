/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class CNContact, NSDate, NSMutableSet, NSNumber, NSSet, NSString, NSURL, NSUUID, UIImage;

@interface WBSForYouLinkRecommendation : NSObject

{
    NSMutableSet *_originalQueries;
    UIImage *_appIcon;
    NSString *_title;
    NSString *_footnote;
    NSURL *_pageURL;
    NSString *_simplifiedURLString;
    NSURL *_imageURL;
    UIImage *_image;
    CNContact *_contact;
    UIImage *_contactImage;
    NSDate *_lastSeenDate;
    id _sourceID;
    NSString *_bundleIdentifier;
    NSString *_secondarySourceIdentifier;
    unsigned long long _source;
    unsigned long long _topicSource;
    NSUUID *_uniqueIdentifier;
    NSNumber *_cachedScore;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *footnote;
@property (copy, nonatomic, readonly) NSString *originalQueriesString;
@property (copy, nonatomic, readonly) NSSet *originalQueries;
@property (nonatomic, readonly) NSURL *pageURL;
@property (copy, nonatomic, readonly) NSString *simplifiedURLString;
@property (retain, nonatomic) NSURL *imageURL;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) UIImage *contactImage;
@property (nonatomic, readonly) UIImage *appIcon;
@property (nonatomic, readonly) NSDate *lastSeenDate;
@property (retain, nonatomic) id sourceID;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic, readonly) NSString *badgeBundleIdentifier;
@property (copy, nonatomic) NSString *secondarySourceIdentifier;
@property (nonatomic, readonly) unsigned long long source;
@property (nonatomic) unsigned long long topicSource;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (retain, nonatomic) NSNumber *cachedScore;

- (id)initWithTitle:(id)arg1 url:(id)arg2 lastSeenDate:(id)arg3 source:(unsigned long long)arg4 topicSource:(unsigned long long)arg5;
- (void)addOriginalQueries:(id)arg1;

@end
