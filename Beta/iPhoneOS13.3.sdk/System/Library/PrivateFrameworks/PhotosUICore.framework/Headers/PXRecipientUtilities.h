/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@interface PXRecipientUtilities : NSObject

+ (id)composeRecipientForPersonSuggestion:(id)arg1;
+ (id)composeRecipientForContact:(id)arg1;
+ (id)composeRecipientForAddress:(id)arg1 kind:(long long)arg2;
+ (id)composeRecipientForRecipient:(id)arg1;
+ (_Bool)bootstrapPersonSuggestion:(id)arg1 withContact:(id)arg2 error:(id *)arg3;
+ (void)_getAddressForContact:(id)arg1 address:(id *)arg2 addressKind:(unsigned long long *)arg3;

@end
