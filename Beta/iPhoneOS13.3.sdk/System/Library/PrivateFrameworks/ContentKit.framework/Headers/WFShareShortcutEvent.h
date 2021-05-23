/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFShareShortcutEvent : WFEvent

{
    int _source;
    unsigned int _actionCount;
    NSString *_key;
    NSString *_addToSiriBundleIdentifier;
    NSString *_galleryIdentifier;
    NSString *_sharingDestinationBundleIdentifier;
}

@property (copy, nonatomic) NSString *key;
@property (nonatomic) int source;
@property (nonatomic) unsigned int actionCount;
@property (copy, nonatomic) NSString *addToSiriBundleIdentifier;
@property (copy, nonatomic) NSString *galleryIdentifier;
@property (copy, nonatomic) NSString *sharingDestinationBundleIdentifier;

+ (Class)codableEventClass;
+ (id)serializablePropertyTransformers;

@end
