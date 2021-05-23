/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _CKAcknowledgmentTally : NSObject

{
    long long _type;
    NSArray *_senders;
    NSArray *_contacts;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSArray *senders;
@property (copy, nonatomic) NSArray *contacts;

- (id)description;
- (id)initWithType:(long long)arg1 senders:(id)arg2;

@end
