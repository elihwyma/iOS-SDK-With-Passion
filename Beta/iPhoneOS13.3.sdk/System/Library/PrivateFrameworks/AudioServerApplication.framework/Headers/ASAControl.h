/*
 Image: /System/Library/PrivateFrameworks/AudioServerApplication.framework/AudioServerApplication
 */

#import <AudioServerApplication/ASAObject.h>

@interface ASAControl : ASAObject

@property (nonatomic, readonly) unsigned int controlElement;
@property (nonatomic, readonly) unsigned int controlScope;

- (id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(_Bool)arg2;
- (id)coreAudioClassName;

@end
