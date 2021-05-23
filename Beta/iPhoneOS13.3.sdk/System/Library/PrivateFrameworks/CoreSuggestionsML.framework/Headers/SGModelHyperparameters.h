/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SGModelHyperparameters : NSObject

{
    NSString *_featuresModelId;
    NSString *_featuresVersion;
    unsigned long long _vectorLength;
    struct _NSRange _characterNGramRange;
    struct _NSRange _tokenNGramRange;
}

@property (copy, nonatomic, readonly) NSString *featuresModelId;
@property (copy, nonatomic, readonly) NSString *featuresVersion;
@property (nonatomic, readonly) struct _NSRange characterNGramRange;
@property (nonatomic, readonly) struct _NSRange tokenNGramRange;
@property (nonatomic, readonly) unsigned long long vectorLength;

- (id)initWithDictionary:(id)arg1;
- (id)sessionDescriptorForLanguage:(id)arg1;

@end
