/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class NSString;

@interface STPersonContactHandle : NSObject <Swift>

{
    NSString *_handle;
    NSString *_label;
    unsigned long long _type;
}

@property (copy, nonatomic) NSString *handle;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) unsigned long long type;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToPersonContactHandle:(id)arg1;

@end
