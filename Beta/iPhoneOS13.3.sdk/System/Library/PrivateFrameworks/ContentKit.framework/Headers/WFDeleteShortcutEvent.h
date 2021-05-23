/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFDeleteShortcutEvent : WFEvent

{
    int _source;
    NSString *_key;
    NSString *_addToSiriBundleIdentifier;
    NSString *_galleryIdentifier;
}

@property (copy, nonatomic) NSString *key;
@property (nonatomic) int source;
@property (copy, nonatomic) NSString *addToSiriBundleIdentifier;
@property (copy, nonatomic) NSString *galleryIdentifier;

+ (Class)codableEventClass;

@end
