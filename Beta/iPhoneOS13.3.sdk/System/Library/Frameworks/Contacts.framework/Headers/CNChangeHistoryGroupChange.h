/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

#import <Contacts/Swift-Protocol.h>

@class CNChangeHistoryAnchor, CNGroup, NSNumber, NSString;

@interface CNChangeHistoryGroupChange : NSObject <Swift>

{
    NSString *_groupIdentifier;
    long long _changeType;
    CNGroup *_group;
    CNChangeHistoryAnchor *_changeAnchor;
    NSNumber *_changeID;
    NSString *_externalID;
}

@property (nonatomic) long long changeType;
@property (retain, nonatomic) CNGroup *group;
@property (retain, nonatomic) CNChangeHistoryAnchor *changeAnchor;
@property (retain, nonatomic) NSNumber *changeID;
@property (retain, nonatomic) NSString *externalID;
@property (nonatomic, readonly) NSString *groupIdentifier;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 changeType:(long long)arg2 changeAnchor:(id)arg3 changeID:(id)arg4 externalID:(id)arg5;

@end
