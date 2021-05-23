/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface DKDiagnosticParameters : NSObject

{
    NSDictionary *_predicates;
    NSDictionary *_specifications;
    NSDictionary *_parameters;
}

@property (nonatomic, readonly) NSDictionary *predicates;
@property (nonatomic, readonly) NSDictionary *specifications;
@property (nonatomic, readonly) NSDictionary *parameters;

+ (_Bool)supportsSecureCoding;
+ (id)diagnosticParametersWithDictionary:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)_decoderClasses;

@end
