/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <CloudDocs/BRProgressProxy.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BRGlobalProgressProxy : BRProgressProxy

{
    NSString *_kind;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)progressProxy:(id)arg1 shouldProxyProgress:(id)arg2;
- (id)progressProxy:(id)arg1 localizedDescriptionForProgress:(id)arg2;
- (id)initWithGlobalProgressKind:(id)arg1;

@end
