/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSString;

@protocol SAClientBoundCommand <Swift>

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSArray *callbacks;

- (unsigned short)requiresResponse;

@end
