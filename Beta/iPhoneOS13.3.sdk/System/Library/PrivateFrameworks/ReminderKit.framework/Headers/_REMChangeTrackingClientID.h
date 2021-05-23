/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _REMChangeTrackingClientID : NSObject

{
    NSString *_clientName;
    NSString *_accountIdentifier;
}

@property (nonatomic, readonly) NSString *clientName;
@property (nonatomic, readonly) NSString *accountIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithClientName:(id)arg1 accountIdentifier:(id)arg2;

@end
