/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFRunShortcutEvent : WFEvent

{
    _Bool _completed;
    int _source;
    unsigned int _actionCount;
    NSString *_key;
    NSString *_runSource;
    NSString *_automationType;
}

@property (copy, nonatomic) NSString *key;
@property (nonatomic) int source;
@property (copy, nonatomic) NSString *runSource;
@property (copy, nonatomic) NSString *automationType;
@property (nonatomic) unsigned int actionCount;
@property (nonatomic) _Bool completed;

+ (Class)codableEventClass;
+ (id)serializablePropertyTransformers;

@end
