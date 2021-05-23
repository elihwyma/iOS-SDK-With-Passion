/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface MLAppleWordTaggerParameters : NSObject

{
    unsigned long long _revision;
    NSString *_language;
    NSString *_inputFeatureName;
    NSString *_tokensOutputFeatureName;
    NSString *_tokenTagsOutputFeatureName;
    NSString *_tokenLocationsOutputFeatureName;
    NSString *_tokenLengthsOutputFeatureName;
    NSData *_modelParameterData;
    NSArray *_tagNames;
    NSDictionary *_metadata;
}

@property unsigned long long revision;
@property (retain) NSString *language;
@property (retain) NSString *inputFeatureName;
@property (retain) NSString *tokensOutputFeatureName;
@property (retain) NSString *tokenTagsOutputFeatureName;
@property (retain) NSString *tokenLocationsOutputFeatureName;
@property (retain) NSString *tokenLengthsOutputFeatureName;
@property (retain) NSData *modelParameterData;
@property (retain) NSArray *tagNames;
@property (retain) NSDictionary *metadata;

- (id)initWithData:(unsigned long long)arg1 language:(id)arg2 inputFeatureName:(id)arg3 tokensFeatureName:(id)arg4 tokenTagsFeatureName:(id)arg5 tokenLocationsFeatureName:(id)arg6 tokenLengthsFeatureName:(id)arg7 modelData:(id)arg8 tagNames:(id)arg9 metadata:(id)arg10 error:(id *)arg11;
- (id)initWithData:(unsigned long long)arg1 language:(id)arg2 inputFeatureName:(id)arg3 tokensFeatureName:(id)arg4 tokenTagsFeatureName:(id)arg5 tokenLocationsFeatureName:(id)arg6 tokenLengthsFeatureName:(id)arg7 modelData:(id)arg8 tagNames:(id)arg9 error:(id *)arg10;

@end
