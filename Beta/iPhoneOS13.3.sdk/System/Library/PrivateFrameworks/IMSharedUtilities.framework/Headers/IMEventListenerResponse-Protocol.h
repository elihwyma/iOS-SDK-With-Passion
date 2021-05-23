/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <IMSharedUtilities/Swift-Protocol.h>

@class NSDictionary, NSError;

@protocol IMEventListenerResponse <Swift>

@property (nonatomic, readonly, getter=didSucceed) _Bool success;
@property (nonatomic, readonly) NSDictionary *userInfo;
@property (nonatomic, readonly) NSError *error;

@end
