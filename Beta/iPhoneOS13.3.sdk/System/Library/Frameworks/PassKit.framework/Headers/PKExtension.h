/*
 Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

#import <Foundation/NSObject.h>

@class NSString, PKExtensionProvider;

@interface PKExtension : NSObject

{
    NSString *_identifier;
    PKExtensionProvider *_provider;
}

@property (weak, nonatomic) PKExtensionProvider *provider;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *extensionPointIdentifier;

- (id)description;
- (id)extension;
- (id)initWithIdentifier:(id)arg1 provider:(id)arg2;
- (void)beginRemoteViewControllerExtensionServiceWithInputItems:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
