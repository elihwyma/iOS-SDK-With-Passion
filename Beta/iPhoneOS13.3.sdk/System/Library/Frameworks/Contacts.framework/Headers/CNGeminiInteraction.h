/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNGeminiInteraction : NSObject

{
    long long _transport;
    long long _directionality;
    NSString *_handle;
    NSString *_contactIdentifier;
}

@property (nonatomic, readonly) long long transport;
@property (nonatomic, readonly) long long directionality;
@property (copy, nonatomic, readonly) NSString *handle;
@property (copy, nonatomic, readonly) NSString *contactIdentifier;

- (id)initWithTransport:(long long)arg1 directionality:(long long)arg2 destinationHandle:(id)arg3 destinationContactIdentifier:(id)arg4;
- (id)initWithTransport:(long long)arg1 directionality:(long long)arg2 destinationHandle:(id)arg3;

@end
