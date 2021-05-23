/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <NanoMailKitServer/NNMKAttachment.h>

@interface NNMKImageAttachment : NNMKAttachment

{
    _Bool _renderOnClient;
    struct CGSize _imageSize;
}

@property (nonatomic) _Bool renderOnClient;
@property (nonatomic) struct CGSize imageSize;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
