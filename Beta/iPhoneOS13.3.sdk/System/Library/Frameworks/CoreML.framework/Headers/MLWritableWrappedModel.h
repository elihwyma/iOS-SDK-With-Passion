/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <CoreML/MLWrappedModel.h>

#import <CoreML/Swift-Protocol.h>

@class NSString;

@interface MLWritableWrappedModel : MLWrappedModel <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)wrapperAroundWritableModel:(id)arg1;

- (_Bool)writeToURL:(id)arg1 error:(id *)arg2;

@end
