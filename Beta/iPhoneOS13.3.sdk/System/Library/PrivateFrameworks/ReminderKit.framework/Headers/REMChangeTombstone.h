/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

#import <ReminderKit/Swift-Protocol.h>

@class NSNumber, NSString, NSUUID;

@interface REMChangeTombstone : NSObject <Swift>

{
    NSUUID *_objectIdentifier;
    NSString *_externalIdentifier;
    NSNumber *_daIsEventOnlyContainer;
    NSUUID *_shareeOwningListIdentifier;
    NSString *_shareeDisplayName;
    NSString *_shareeAddress;
}

@property (nonatomic, readonly) NSUUID *objectIdentifier;
@property (nonatomic, readonly) NSString *externalIdentifier;
@property (nonatomic, readonly) NSNumber *daIsEventOnlyContainer;
@property (nonatomic, readonly) NSUUID *shareeOwningListIdentifier;
@property (nonatomic, readonly) NSString *shareeDisplayName;
@property (nonatomic, readonly) NSString *shareeAddress;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
