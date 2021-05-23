/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PHAMergeCandidatePair : NSObject

{
    unsigned long long _hash;
    NSString *_person1LocalIdentifier;
    NSString *_person2LocalIdentifier;
    NSString *_reason;
}

@property (readonly) NSString *person1LocalIdentifier;
@property (readonly) NSString *person2LocalIdentifier;
@property (readonly) NSString *reason;

+ (id)mergeCandidatePairWithPerson:(id)arg1 andPerson:(id)arg2 reason:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithPerson:(id)arg1 andPerson:(id)arg2 reason:(id)arg3;

@end
