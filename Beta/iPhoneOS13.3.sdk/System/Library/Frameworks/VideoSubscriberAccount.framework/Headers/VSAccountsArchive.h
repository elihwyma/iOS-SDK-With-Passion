/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSArray, VSAccountChannels;

__attribute__((visibility("hidden")))
@interface VSAccountsArchive : NSObject

{
    NSArray *_accounts;
    VSAccountChannels *_channels;
}

@property (copy, nonatomic) NSArray *accounts;
@property (copy, nonatomic) VSAccountChannels *channels;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
