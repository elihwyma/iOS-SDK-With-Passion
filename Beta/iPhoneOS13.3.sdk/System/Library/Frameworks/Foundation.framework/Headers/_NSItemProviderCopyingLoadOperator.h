/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSItemProvider, NSString;

__attribute__((visibility("hidden")))
@interface _NSItemProviderCopyingLoadOperator : NSObject

{
    NSItemProvider *_itemProvider;
    NSDictionary *_loadedItems;
    CDStruct_4c969caf _destinationProcessAuditToken;
}

@property (nonatomic) NSItemProvider *itemProvider;
@property (retain, nonatomic) NSDictionary *loadedItems;
@property (nonatomic) CDStruct_4c969caf destinationProcessAuditToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemProvider:(id)arg1 destinationProcessAuditToken:(CDStruct_4c969caf)arg2;
- (void)loadItemForTypeIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 expectedValueClass:(Class)arg3 options:(id)arg4;
- (void)loadPreviewImageWithCompletionHandler:(CDUnknownBlockType)arg1 expectedValueClass:(Class)arg2 options:(id)arg3;
- (id)_loadItemsForTypeIdentifiers:(id)arg1 auditToken:(CDStruct_4c969caf)arg2 itemProvider:(id)arg3;
- (id)_sandboxedResourceForItemIfNeeded:(id)arg1 auditToken:(CDStruct_4c969caf)arg2 error:(id *)arg3;

@end
