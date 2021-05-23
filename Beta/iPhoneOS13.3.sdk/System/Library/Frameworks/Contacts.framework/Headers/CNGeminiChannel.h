/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

#import <Contacts/Swift-Protocol.h>

@class NSString, TUSenderIdentity;

@interface CNGeminiChannel : NSObject <Swift>

{
    _Bool _available;
    NSString *_channelIdentifier;
    NSString *_localizedLabel;
    NSString *_localizedBadgeLabel;
    NSString *_handle;
    TUSenderIdentity *_senderIdentity;
}

@property (nonatomic, readonly) NSString *channelIdentifier;
@property (nonatomic, readonly) NSString *localizedLabel;
@property (nonatomic, readonly) NSString *localizedBadgeLabel;
@property (nonatomic, readonly) NSString *handle;
@property (nonatomic, readonly) TUSenderIdentity *senderIdentity;
@property (nonatomic, readonly, getter=isAvailable) _Bool available;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSenderIdentity:(id)arg1;
- (id)initWithDanglingPlanItem:(id)arg1;
- (id)initWithDisabledCellularPlanItem:(id)arg1;
- (id)initUnavailableChannelWithIdentifier:(id)arg1;
- (id)initInvalidChannel;

@end
