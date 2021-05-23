/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class NSString;

@interface AFSiriTaskUsageResult : NSObject <Swift>

{
    NSString *_originatingAceID;
}

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithOriginatingAceID:(id)arg1;
- (id)_originatingAceID;
- (id)_resultDescription;

@end
