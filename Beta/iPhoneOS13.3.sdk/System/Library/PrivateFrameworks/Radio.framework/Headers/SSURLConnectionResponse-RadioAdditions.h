/*
 Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

#import <StoreServices/SSURLConnectionResponse.h>

@class NSData;

@interface SSURLConnectionResponse (RadioAdditions)

@property (nonatomic, readonly) NSData *radio_decompressedBodyData;

@end
