/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class NSString;

@interface AFSyncSnapshot : NSObject <Swift>

{
    NSString *_anchor;
    NSString *_validity;
    long long _count;
    NSString *_key;
}

@property (copy, nonatomic) NSString *anchor;
@property (copy, nonatomic) NSString *validity;
@property (nonatomic) long long count;
@property (copy, nonatomic) NSString *key;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
