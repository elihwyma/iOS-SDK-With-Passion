/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSString;

__attribute__((visibility("hidden")))
@interface QLImageItemContentsTransformer

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)allowedOutputClasses;

- (id)transformedContentsFromURL:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (id)transformedContentsFromData:(id)arg1 context:(id)arg2 error:(id *)arg3;

@end
