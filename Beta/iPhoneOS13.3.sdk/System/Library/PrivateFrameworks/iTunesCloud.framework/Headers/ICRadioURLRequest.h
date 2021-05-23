/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICStoreURLRequest.h>

@class NSNumber;

@interface ICRadioURLRequest : ICStoreURLRequest

{
    _Bool _backgroundRadioRequest;
    NSNumber *_privateListeningEnabled;
    NSNumber *_delegatedPrivateListeningEnabled;
    long long _protocolVersion;
    CDUnknownBlockType _radioContentDictionaryCreationBlock;
}

@property (nonatomic, getter=isBackgroundRadioRequest) _Bool backgroundRadioRequest;
@property (copy, nonatomic, getter=isPrivateListeningEnabled) NSNumber *privateListeningEnabled;
@property (copy, nonatomic, getter=isDelegatedPrivateListeningEnabled) NSNumber *delegatedPrivateListeningEnabled;
@property (nonatomic) long long protocolVersion;
@property (copy, nonatomic) CDUnknownBlockType radioContentDictionaryCreationBlock;

- (id)initWithURLRequest:(id)arg1 requestContext:(id)arg2;
- (void)buildStoreURLRequestWithURLRequest:(id)arg1 builderProperties:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_decorateHeaderPropertiesForURLRequest:(id)arg1 withBuilderProperties:(id)arg2;

@end
