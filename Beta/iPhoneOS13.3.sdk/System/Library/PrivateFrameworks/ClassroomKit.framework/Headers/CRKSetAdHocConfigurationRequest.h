/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskRequest.h>

@class NSDictionary;

@interface CRKSetAdHocConfigurationRequest : CATTaskRequest

{
    _Bool _merge;
    NSDictionary *_configuration;
}

@property (copy, nonatomic) NSDictionary *configuration;
@property (nonatomic) _Bool merge;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
