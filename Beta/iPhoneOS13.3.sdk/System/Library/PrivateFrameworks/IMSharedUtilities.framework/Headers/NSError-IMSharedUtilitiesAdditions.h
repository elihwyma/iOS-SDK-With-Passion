/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSError.h>

@interface NSError (IMSharedUtilitiesAdditions)

+ (id)errorArrayFromSerializedErrorArray_im:(id)arg1;
+ (id)serializedErrorArrayFromErrorArray_im:(id)arg1;

- (id)initWithSerializedError_im:(struct NSDictionary *)arg1;
- (struct NSDictionary *)serializedError_im;

@end
