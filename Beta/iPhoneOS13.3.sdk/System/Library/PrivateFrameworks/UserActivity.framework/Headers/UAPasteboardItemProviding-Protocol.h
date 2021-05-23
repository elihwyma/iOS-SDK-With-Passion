/*
 Image: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
 */

#import <UserActivity/Swift-Protocol.h>

@class NSString, NSUUID;

@protocol UAPasteboardItemProviding <Swift>

@property (copy, nonatomic) NSUUID *uuid;
@property (copy, nonatomic) NSString *type;

- (unsigned short)getDataWithCompletionBlock: /* Error: Ran out of types for this method. */;

@end
