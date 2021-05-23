/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class NSIndexSet;

@protocol EDSearchableCriterion;

__attribute__((visibility("hidden")))
@interface _EMSearchableIndexResultKey : NSObject

{
    id <EDSearchableCriterion> _criterion;
    NSIndexSet *_mailboxIDs;
}

@property (retain, nonatomic) id <EDSearchableCriterion> criterion;
@property (copy, nonatomic) NSIndexSet *mailboxIDs;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end
