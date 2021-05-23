/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

#import <Email/Swift-Protocol.h>

@class NSArray;

@interface EMMessageChangeAction : NSObject <Swift>

{
    NSArray *_objectIDs;
}

@property (copy, nonatomic, readonly) NSArray *objectIDs;
@property (nonatomic, readonly) long long signpostType;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessageListItems:(id)arg1;

@end
