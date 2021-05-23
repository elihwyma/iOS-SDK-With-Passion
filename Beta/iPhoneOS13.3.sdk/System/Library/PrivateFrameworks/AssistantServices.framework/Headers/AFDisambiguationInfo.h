/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class NSArray;

@interface AFDisambiguationInfo : NSObject <Swift>

{
    long long _version;
    NSArray *_history;
}

@property (nonatomic, readonly) long long version;
@property (retain, nonatomic) NSArray *history;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
