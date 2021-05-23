/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/WBSParsecModel.h>

@class NSArray, NSString, NSURL, WBSParsecImageRepresentation;

@interface WBSParsecActionButton : WBSParsecModel

{
    _Bool _forStreamingResult;
    _Bool _overlay;
    NSString *_type;
    NSString *_label;
    NSString *_labelAlignment;
    NSString *_itunesLabel;
    NSString *_offerType;
    NSString *_completion;
    NSString *_itunesCompletion;
    NSString *_mediaKind;
    NSArray *_itunesContentIdentifiers;
    WBSParsecImageRepresentation *_baseIcon;
    WBSParsecImageRepresentation *_icon;
    NSString *_punchoutAppName;
    NSString *_punchoutAppBundleIdentifier;
    NSURL *_punchoutURL;
}

@property (copy, nonatomic, readonly) NSString *type;
@property (copy, nonatomic, readonly) NSString *label;
@property (copy, nonatomic, readonly) NSString *labelAlignment;
@property (copy, nonatomic, readonly) NSString *itunesLabel;
@property (copy, nonatomic, readonly) NSString *offerType;
@property (copy, nonatomic, readonly) NSString *completion;
@property (copy, nonatomic, readonly) NSString *itunesCompletion;
@property (copy, nonatomic, readonly) NSString *mediaKind;
@property (copy, nonatomic, readonly) NSArray *itunesContentIdentifiers;
@property (nonatomic, readonly, getter=isForStreamingResult) _Bool forStreamingResult;
@property (nonatomic, readonly, getter=isForAppleMusicResult) _Bool forAppleMusicResult;
@property (nonatomic, readonly, getter=isOverlay) _Bool overlay;
@property (nonatomic, readonly) WBSParsecImageRepresentation *baseIcon;
@property (nonatomic, readonly) WBSParsecImageRepresentation *icon;
@property (copy, nonatomic, readonly) NSString *punchoutAppName;
@property (copy, nonatomic, readonly) NSString *punchoutAppBundleIdentifier;
@property (nonatomic, readonly) NSURL *punchoutURL;

+ (id)schema;

- (id)initWithDictionary:(id)arg1 mediaKind:(id)arg2;

@end
