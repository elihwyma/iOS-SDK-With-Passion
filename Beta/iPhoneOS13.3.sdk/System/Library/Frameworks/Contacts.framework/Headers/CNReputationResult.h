/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class CNReputationHandle;

__attribute__((visibility("hidden")))
@interface CNReputationResult : NSObject

{
    CNReputationHandle *_handle;
    long long _score;
}

@property (copy, readonly) CNReputationHandle *handle;
@property (readonly) long long score;

+ (id)descriptionForScore:(long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithHandle:(id)arg1 score:(long long)arg2;

@end
