/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUSingleSourceDefinition.h>

@class NSString, NSURL;

@interface NUFileSourceDefinition : NUSingleSourceDefinition

{
    _Bool _useEmbeddedPreview;
    NSURL *_url;
    NSString *_uti;
}

@property (readonly) NSURL *url;
@property (readonly) NSString *uti;
@property (nonatomic) _Bool useEmbeddedPreview;

- (id)init;
- (id)description;
- (long long)mediaType;
- (id)generateSourceNodeWithIdentifier:(id)arg1 error:(out id *)arg2;
- (id)initWithURL:(id)arg1 UTI:(id)arg2;

@end
