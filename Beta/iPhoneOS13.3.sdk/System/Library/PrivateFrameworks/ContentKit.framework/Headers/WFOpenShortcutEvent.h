/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFOpenShortcutEvent : WFEvent

{
    int _source;
    unsigned int _actionCount;
    NSString *_key;
    NSString *_addToSiriBundleIdentifier;
    NSString *_galleryIdentifier;
}

@property (copy, nonatomic) NSString *key;
@property (nonatomic) int source;
@property (nonatomic) unsigned int actionCount;
@property (copy, nonatomic) NSString *addToSiriBundleIdentifier;
@property (copy, nonatomic) NSString *galleryIdentifier;

+ (Class)codableEventClass;
+ (id)serializablePropertyTransformers;

@end
