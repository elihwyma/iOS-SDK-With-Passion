/*
 Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

#import <Foundation/NSProcessInfo.h>

@class NSString;

@interface NSProcessInfo (SafariCoreExtras)

@property (copy, nonatomic, readonly) NSString *safari_deviceUDID;
@property (nonatomic, readonly) _Bool safari_systemSupportsBookmarkDAVMoves;

@end
