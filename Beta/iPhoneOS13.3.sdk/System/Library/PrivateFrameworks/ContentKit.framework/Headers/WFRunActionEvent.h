/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFRunActionEvent : WFEvent

{
    _Bool _completed;
    int _source;
    NSString *_key;
    NSString *_runSource;
    NSString *_actionIdentifier;
}

@property (copy, nonatomic) NSString *key;
@property (nonatomic) int source;
@property (copy, nonatomic) NSString *runSource;
@property (copy, nonatomic) NSString *actionIdentifier;
@property (nonatomic) _Bool completed;

+ (Class)codableEventClass;

@end
