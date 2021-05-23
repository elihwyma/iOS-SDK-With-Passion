/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXComponentClassification;

@interface SXDeprecatedComponent : NSObject

{
    NSString *_typeString;
    SXComponentClassification *_replacementClassification;
}

@property (nonatomic, readonly) NSString *typeString;
@property (nonatomic, readonly) SXComponentClassification *replacementClassification;

+ (id)deprecatedComponentWithType:(id)arg1 withReplacementClassificationClass:(Class)arg2;

- (id)initWithType:(id)arg1 withReplacementClassification:(Class)arg2;

@end
