/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSError.h>

@interface NSError (SafariSharedCloudKitExtras)

- (_Bool)safari_errorOrAnyPartialErrorHasCloudKitErrorCode:(long long)arg1;
- (_Bool)safari_errorOrAnyPartialErrorHasCloudKitInternalErrorCode:(long long)arg1;
- (void)_safari_enumerateCloudKitErrorsWithBlock:(CDUnknownBlockType)arg1;

@end
