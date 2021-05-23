/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class NSString, NSUUID;

@interface AFSiriRequest : NSObject <Swift>

{
    NSString *_originatingAceID;
    NSUUID *_identifier;
    NSString *__refId;
}

@property (copy, nonatomic, setter=_setRefId:) NSString *_refId;
@property (copy, nonatomic, setter=_setOriginatingAceID:) NSString *_originatingAceID;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_identifier;
- (id)_af_analyticsContextDescription;
- (id)_initWithOriginatingAceID:(id)arg1;
- (_Bool)_makeAppFrontmost;
- (id)_initWithOriginatingAceID:(id)arg1 identifier:(id)arg2;
- (id)_descriptionWithProperties:(id)arg1;
- (id)requestName;

@end
