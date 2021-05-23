/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

#import <ReminderKit/Swift-Protocol.h>

@class NSString, REMObjectID;

@interface REMReplicaIDSource : NSObject <Swift>

{
    REMObjectID *_accountID;
    NSString *_crdtID;
}

@property (nonatomic, readonly) REMObjectID *accountID;
@property (nonatomic, readonly) NSString *crdtID;

+ (_Bool)supportsSecureCoding;
+ (id)crdtIDWithObjectID:(id)arg1 property:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAccountID:(id)arg1 objectID:(id)arg2 property:(id)arg3;
- (id)initWithAccountID:(id)arg1 crdtID:(id)arg2;

@end
