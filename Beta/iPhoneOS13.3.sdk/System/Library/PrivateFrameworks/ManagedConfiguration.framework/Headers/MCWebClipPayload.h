/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCPayload.h>

@class NSData, NSNumber, NSString, NSURL;

@interface MCWebClipPayload : MCPayload

{
    NSURL *_URL;
    NSString *_label;
    NSData *_iconData;
    _Bool _isRemovable;
    _Bool _precomposed;
    _Bool _fullScreen;
    NSString *_savedIdentifier;
    NSNumber *_isRemovableNum;
    NSNumber *_precomposedNum;
    NSNumber *_fullScreenNum;
}

@property (nonatomic, readonly) NSNumber *isRemovableNum;
@property (nonatomic, readonly) NSNumber *precomposedNum;
@property (nonatomic, readonly) NSNumber *fullScreenNum;
@property (retain, nonatomic, readonly) NSURL *URL;
@property (retain, nonatomic, readonly) NSString *label;
@property (retain, nonatomic, readonly) NSData *iconData;
@property (nonatomic, readonly) _Bool isRemovable;
@property (nonatomic, readonly) _Bool precomposed;
@property (nonatomic, readonly) _Bool fullScreen;
@property (retain, nonatomic) NSString *savedIdentifier;

+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;

- (id)description;
- (id)title;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)stubDictionary;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)subtitle2Label;
- (id)subtitle2Description;

@end
