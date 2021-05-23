/*
 Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface RKConversation : NSObject

{
    unsigned long long _type;
    NSArray *_messages;
}

@property (readonly) unsigned long long type;
@property (copy, readonly) NSArray *messages;

- (id)initWithString:(unsigned long long)arg1 messages:(id)arg2;

@end
