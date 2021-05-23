/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Foundation/NSObject.h>

@class NSArray, NSAttributedString, NSString, TPSURLAction, UIColor;

@interface TPSTip : NSObject

{
    _Bool _containsTargetingMeta;
    _Bool _containsLinks;
    _Bool _textContainsHTML;
    unsigned long long _type;
    unsigned long long _priority;
    UIColor *_backgroundColor;
    TPSURLAction *_action;
    NSString *_notificationTitle;
    NSString *_notificationText;
    NSAttributedString *_attributedString;
    NSString *_identifier;
    NSString *_title;
    NSString *_summary;
    NSString *_shortTitle;
    NSString *_altImage;
    NSString *_altVideo;
    NSString *_text;
    NSString *_publishedDate;
    NSString *_languageCode;
    NSString *_shareText;
    NSString *_imageName;
    NSString *_videoName;
    NSString *_webURLPath;
    NSArray *_collections;
}

@property (nonatomic) _Bool containsTargetingMeta;
@property (nonatomic) _Bool containsLinks;
@property (nonatomic) _Bool textContainsHTML;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long priority;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) TPSURLAction *action;
@property (copy, nonatomic) NSString *notificationTitle;
@property (copy, nonatomic) NSString *notificationText;
@property (copy, nonatomic) NSAttributedString *attributedString;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *summary;
@property (copy, nonatomic) NSString *shortTitle;
@property (copy, nonatomic) NSString *altImage;
@property (copy, nonatomic) NSString *altVideo;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *publishedDate;
@property (copy, nonatomic) NSString *languageCode;
@property (copy, nonatomic) NSString *shareText;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *videoName;
@property (copy, nonatomic) NSString *webURLPath;
@property (copy, nonatomic) NSArray *collections;

+ (_Bool)supportsSecureCoding;
+ (id)classSet;
+ (id)assetNameFromFileName:(id)arg1;
+ (id)identifierFromTipDictionary:(id)arg1;
+ (id)languageCodeFromTipDictionary:(id)arg1;
+ (id)imageNameFromTipDictionary:(id)arg1;
+ (id)videoNameFromTipDictionary:(id)arg1;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)updateWithDictionary:(id)arg1;

@end
