/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <Foundation/NSObject.h>

@interface MSProtocolUtilities : NSObject

+ (id)_urlSession;
+ (void)fetchMPSStateWithBaseAvailabilityURL:(id)arg1 personID:(id)arg2 originalLibrarySize:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
+ (id)appleIDSession;
+ (id)Win32SHA1OfUDID:(id)arg1;
+ (id)deviceInfoDictForPersonID:(id)arg1;
+ (id)retryAfterDateBasedOnRetryAfterHeaderString:(id)arg1;
+ (void)applyUserDefaultOverridesToResponse:(id)arg1;

@end
