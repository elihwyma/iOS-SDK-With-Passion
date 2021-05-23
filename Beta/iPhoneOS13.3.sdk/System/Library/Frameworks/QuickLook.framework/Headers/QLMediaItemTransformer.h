/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface QLMediaItemTransformer : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)allowedOutputClasses;

- (id)transformedContentsFromURL:(id)arg1 context:(id)arg2 error:(id *)arg3;

@end
