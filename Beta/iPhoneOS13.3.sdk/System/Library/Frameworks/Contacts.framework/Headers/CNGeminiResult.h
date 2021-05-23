/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

#import <Contacts/Swift-Protocol.h>

@class CNGeminiChannel, NSArray;

@interface CNGeminiResult : NSObject <Swift>

{
    CNGeminiChannel *_channel;
    long long _usage;
    NSArray *_availableChannels;
}

@property (nonatomic, readonly) CNGeminiChannel *channel;
@property (nonatomic, readonly) long long usage;
@property (nonatomic, readonly) NSArray *availableChannels;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithChannel:(id)arg1 usage:(long long)arg2 availableChannels:(id)arg3;

@end
