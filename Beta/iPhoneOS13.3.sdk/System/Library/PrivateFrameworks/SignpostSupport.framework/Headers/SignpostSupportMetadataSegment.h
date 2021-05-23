/*
 Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, SignpostSupportMessageArgument;

@interface SignpostSupportMetadataSegment : NSObject

{
    NSString *_typeNamespace;
    NSString *_type;
    NSArray *_placeholderTokens;
    NSString *_stringPrefix;
    SignpostSupportMessageArgument *_argument;
}

@property (nonatomic, readonly) NSString *typeNamespace;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSArray *placeholderTokens;
@property (nonatomic, readonly) NSString *stringPrefix;
@property (nonatomic, readonly) SignpostSupportMessageArgument *argument;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)_dictionaryRepresentationWithIsHumanReadable:(_Bool)arg1 shouldRedact:(_Bool)arg2 didRedactOut:(_Bool *)arg3;
- (id)initWithArgumentObject:(id)arg1 typeNamespace:(id)arg2 type:(id)arg3 tokens:(id)arg4 stringPrefix:(id)arg5;

@end
