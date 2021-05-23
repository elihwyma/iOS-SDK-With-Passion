/*
 Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

#import <Foundation/NSObject.h>

@class Protocol;

@protocol NFDefinitionContainer;

@interface NFDefinition : NSObject

{
    id <NFDefinitionContainer> _privateAccessContainer;
    id <NFDefinitionContainer> _privateAccessWeakContainer;
    _Bool _canBeOverridden;
    _Bool _canBeNil;
    unsigned long long _source;
    Class _cls;
    Protocol *_protocol;
    CDUnknownBlockType _factory;
    unsigned long long _scope;
    CDUnknownBlockType _validationBlock;
    CDUnknownBlockType _configurationBlock;
}

@property (nonatomic) unsigned long long source;
@property (retain, nonatomic) Class cls;
@property (retain, nonatomic) Protocol *protocol;
@property (copy, nonatomic) CDUnknownBlockType factory;
@property (nonatomic) unsigned long long scope;
@property (nonatomic) _Bool canBeOverridden;
@property (nonatomic) _Bool canBeNil;
@property (copy, nonatomic) CDUnknownBlockType validationBlock;
@property (copy, nonatomic) CDUnknownBlockType configurationBlock;

- (id)description;
- (id)initWithClass:(Class)arg1 factory:(CDUnknownBlockType)arg2;
- (id)initWithProtocol:(id)arg1 factory:(CDUnknownBlockType)arg2;
- (id)initWithUnsafeFactory:(CDUnknownBlockType)arg1;
- (id)inScope:(unsigned long long)arg1;
- (id)withValidation:(CDUnknownBlockType)arg1;
- (id)withConfiguration:(CDUnknownBlockType)arg1;
- (id)canBeOverridden:(_Bool)arg1;
- (id)canBeNil:(_Bool)arg1;
- (id)privateAccessContainer;
- (id)withPrivateAccessInContainer:(id)arg1;
- (id)withPrivateAccessInWeakContainer:(id)arg1;

@end
