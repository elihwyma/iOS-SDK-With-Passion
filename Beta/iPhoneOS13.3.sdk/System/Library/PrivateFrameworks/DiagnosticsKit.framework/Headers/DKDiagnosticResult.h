/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSNumber;

@interface DKDiagnosticResult : NSObject

{
    NSNumber *_statusCode;
    NSDictionary *_data;
    NSArray *_files;
}

@property (nonatomic, readonly) NSNumber *statusCode;
@property (nonatomic, readonly) NSDictionary *data;
@property (nonatomic, readonly) NSArray *files;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMutableResult:(id)arg1;

@end
