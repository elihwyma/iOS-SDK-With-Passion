/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSError;

@interface VSFailable : NSObject

{
    long long _kind;
    id _object;
    NSError *_error;
}

@property (nonatomic) long long kind;
@property (retain, nonatomic) id object;
@property (copy, nonatomic) NSError *error;

+ (_Bool)supportsSecureCoding;
+ (id)decodableClasses;
+ (id)failableWithError:(id)arg1;
+ (id)failableWithObject:(id)arg1;

- (id)init;
- (id)description;
- (id)initWithObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithError:(id)arg1;
- (void)unwrapObject:(CDUnknownBlockType)arg1 error:(CDUnknownBlockType)arg2;

@end
