/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class NSUUID;

@interface AFSiriResponse : NSObject <Swift>

{
    NSUUID *_requestIdentifier;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithRequest:(id)arg1;
- (_Bool)_isForRequest:(id)arg1;
- (id)_initWithRequestIdentifier:(id)arg1;

@end
