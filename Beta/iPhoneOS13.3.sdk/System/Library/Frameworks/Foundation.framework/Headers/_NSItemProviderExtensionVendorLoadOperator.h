/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface _NSItemProviderExtensionVendorLoadOperator : NSObject

{
    NSUUID *_identifier;
    NSUUID *_extensionContextIdentifier;
}

@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSUUID *extensionContextIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithExtensionContextIdentifier:(id)arg1;
- (void)loadItemForTypeIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 expectedValueClass:(Class)arg3 options:(id)arg4;
- (void)loadPreviewImageWithCompletionHandler:(CDUnknownBlockType)arg1 expectedValueClass:(Class)arg2 options:(id)arg3;

@end
