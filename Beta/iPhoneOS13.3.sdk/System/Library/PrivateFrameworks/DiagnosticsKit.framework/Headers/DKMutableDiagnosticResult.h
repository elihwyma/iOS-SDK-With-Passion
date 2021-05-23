/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

#import <DiagnosticsKit/DKDiagnosticResult.h>

@class NSArray, NSDictionary, NSNumber;

@interface DKMutableDiagnosticResult : DKDiagnosticResult

{
    NSNumber *_statusCode;
    NSDictionary *_data;
    NSArray *_files;
}

@property (retain, nonatomic) NSNumber *statusCode;
@property (retain, nonatomic) NSDictionary *data;
@property (retain, nonatomic) NSArray *files;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end
