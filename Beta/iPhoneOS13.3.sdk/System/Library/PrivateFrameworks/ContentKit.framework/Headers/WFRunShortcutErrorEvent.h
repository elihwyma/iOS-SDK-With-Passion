/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFRunShortcutErrorEvent : WFEvent

{
    NSString *_key;
    NSString *_actionIdentifier;
    NSString *_errorDomain;
    NSString *_errorCode;
}

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *actionIdentifier;
@property (copy, nonatomic) NSString *errorDomain;
@property (copy, nonatomic) NSString *errorCode;

+ (Class)codableEventClass;

@end
