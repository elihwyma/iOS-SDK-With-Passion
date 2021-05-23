/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class CKContainer, CKDatabase, CKSubscription;

__attribute__((visibility("hidden")))
@interface CKSubscriptionInfo : NSObject

{
    CKSubscription *_subscription;
    CKDatabase *_database;
    CKContainer *_container;
    CDUnknownBlockType _handler;
}

@property (retain, nonatomic) CKSubscription *subscription;
@property (retain, nonatomic) CKDatabase *database;
@property (retain, nonatomic) CKContainer *container;
@property (copy, nonatomic) CDUnknownBlockType handler;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end
