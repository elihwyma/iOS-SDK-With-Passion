/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFSetupGalleryShortcutEvent : WFEvent

{
    _Bool _completed;
    NSString *_key;
    NSString *_galleryCategoryIdentifier;
    NSString *_galleryIdentifier;
    NSString *_addToSiriBundleIdentifier;
}

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *galleryCategoryIdentifier;
@property (copy, nonatomic) NSString *galleryIdentifier;
@property (copy, nonatomic) NSString *addToSiriBundleIdentifier;
@property (nonatomic) _Bool completed;

+ (Class)codableEventClass;

@end
