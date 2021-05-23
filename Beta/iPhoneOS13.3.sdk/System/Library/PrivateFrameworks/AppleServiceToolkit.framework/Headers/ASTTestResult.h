/*
 Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

#import <AppleServiceToolkit/ASTSealablePayload.h>

@class NSArray, NSDictionary, NSNumber;

@interface ASTTestResult : ASTSealablePayload

{
    NSNumber *_statusCode;
    NSDictionary *_data;
    NSArray *_files;
    double _testDuration;
    NSNumber *_allowCellularSizeThreshold;
    NSNumber *_testId;
    NSDictionary *_predicates;
    NSDictionary *_dictionary;
}

@property (retain, nonatomic) NSDictionary *predicates;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, readonly) NSNumber *testId;
@property (retain, nonatomic) NSNumber *statusCode;
@property (retain, nonatomic) NSDictionary *data;
@property (retain, nonatomic) NSArray *files;
@property (nonatomic) double testDuration;
@property (retain, nonatomic) NSNumber *allowCellularSizeThreshold;

+ (id)resultWithTestId:(id)arg1 parameters:(id)arg2;

- (id)init;
- (id)generatePayload;
- (_Bool)sealWithFileSigner:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (void)sealWithSealableFiles:(id)arg1;
- (void)sealWithPayload:(id)arg1 signature:(id)arg2;
- (id)initWithTestId:(id)arg1 parameters:(id)arg2;

@end
