/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h>

@class NSString;

@interface QLDataItemTransformer : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)allowedOutputClasses;

- (id)transformedContentsFromData:(id)arg1 context:(id)arg2 error:(id *)arg3;

@end
