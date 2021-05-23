/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface MFMailAccountProxy : NSObject

{
    NSDictionary *_properties;
}

@property (nonatomic, readonly) NSString *fullUserName;
@property (nonatomic, readonly) NSString *username;
@property (nonatomic, readonly) NSString *firstEmailAddress;
@property (nonatomic, readonly) NSArray *emailAddresses;
@property (nonatomic, readonly) NSArray *fromEmailAddresses;
@property (nonatomic, readonly) NSArray *fromEmailAddressesIncludingDisabled;
@property (nonatomic, readonly) NSString *uniqueID;
@property (nonatomic, readonly) _Bool isDefaultDeliveryAccount;
@property (nonatomic, readonly) _Bool supportsThreadOperations;
@property (nonatomic, readonly) _Bool restrictsRepliesAndForwards;
@property (nonatomic, readonly) _Bool supportsMailDrop;
@property (nonatomic, readonly) _Bool isManaged;
@property (nonatomic, readonly) id mailAccount;

- (_Bool)_isActive;
- (id)_initWithProperties:(id)arg1;
- (_Bool)_isRestricted;
- (id)_emailAddressesAndAliases;

@end
