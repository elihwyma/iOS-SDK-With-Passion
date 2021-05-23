/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class NSSet, NSString, SASyncAppMetaData;

@interface AFSyncInfo : NSObject <Swift>

{
    _Bool _targetIsLocal;
    _Bool _forVerification;
    NSString *_anchor;
    NSString *_validity;
    long long _count;
    NSString *_key;
    SASyncAppMetaData *_appMetadata;
    NSSet *_reasons;
}

@property (copy, nonatomic) NSString *anchor;
@property (copy, nonatomic) NSString *validity;
@property (nonatomic) long long count;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) SASyncAppMetaData *appMetadata;
@property (nonatomic) _Bool targetIsLocal;
@property (nonatomic) _Bool forVerification;
@property (copy, nonatomic) NSSet *reasons;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAnchor:(id)arg1 forcingReset:(_Bool)arg2;

@end
