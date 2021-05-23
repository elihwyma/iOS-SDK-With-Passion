/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData;

__attribute__((visibility("hidden")))
@interface _CNChangeHistoryFetchExecutionResponse : NSObject

{
    NSArray *_events;
    NSData *_token;
}

@property (copy, readonly) NSArray *events;
@property (copy, readonly) NSData *token;

- (id)initWithEvents:(id)arg1 token:(id)arg2;

@end
