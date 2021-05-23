/*
 Image: /System/Library/PrivateFrameworks/EnhancedLoggingState.framework/EnhancedLoggingState
 */

#import <Foundation/NSObject.h>

#import <EnhancedLoggingState/Swift-Protocol.h>

@class NSDictionary, NSString;

@interface ELSQueueEntry : NSObject <Swift>

{
    _Bool _retry;
    NSString *_type;
    NSString *_typeName;
    NSDictionary *_parameters;
    double _executeAfterDuration;
}

@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *typeName;
@property (retain, nonatomic) NSDictionary *parameters;
@property (nonatomic) double executeAfterDuration;
@property (nonatomic) _Bool retry;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithType:(id)arg1 typeName:(id)arg2 parameters:(id)arg3 executeAfterDuration:(double)arg4 retry:(_Bool)arg5;

@end
