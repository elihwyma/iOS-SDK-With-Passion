/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface MLAppleTextClassifierParameters : NSObject

{
    unsigned long long _revision;
    NSString *_language;
    NSString *_inputFeatureName;
    NSString *_outputFeatureName;
    NSData *_modelParameterData;
    NSArray *_labelNames;
    NSDictionary *_metadata;
}

@property unsigned long long revision;
@property (retain) NSString *language;
@property (retain) NSString *inputFeatureName;
@property (retain) NSString *outputFeatureName;
@property (retain) NSData *modelParameterData;
@property (retain) NSArray *labelNames;
@property (retain) NSDictionary *metadata;

- (id)initWithData:(unsigned long long)arg1 language:(id)arg2 inputFeatureName:(id)arg3 outputFeatureName:(id)arg4 modelData:(id)arg5 labelNames:(id)arg6 metadata:(id)arg7 error:(id *)arg8;
- (id)initWithData:(unsigned long long)arg1 language:(id)arg2 inputFeatureName:(id)arg3 outputFeatureName:(id)arg4 modelData:(id)arg5 labelNames:(id)arg6 error:(id *)arg7;

@end
