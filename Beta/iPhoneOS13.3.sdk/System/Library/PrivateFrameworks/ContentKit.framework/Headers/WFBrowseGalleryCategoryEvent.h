/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFBrowseGalleryCategoryEvent : WFEvent

{
    NSString *_key;
    NSString *_galleryCategoryIdentifier;
}

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *galleryCategoryIdentifier;

+ (Class)codableEventClass;

@end
