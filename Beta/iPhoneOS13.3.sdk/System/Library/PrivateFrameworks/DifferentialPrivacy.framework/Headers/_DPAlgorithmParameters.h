/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSObject.h>

@class NSDictionary, NSString;

@interface _DPAlgorithmParameters : NSObject

{
    NSString *_serverAlgorithmString;
    NSDictionary *_parameterDictionary;
}

@property (copy, nonatomic, readonly) NSString *serverAlgorithmString;
@property (nonatomic, readonly) NSDictionary *parameterDictionary;

+ (id)parametersFromFile:(id)arg1;
+ (id)algorithmParametersFromDictionary:(id)arg1;
+ (id)algorithmParametersForKey:(id)arg1;
+ (id)allAlgorithmNames;

- (id)init;
- (id)description;
- (id)initWithDictionary:(id)arg1;

@end
