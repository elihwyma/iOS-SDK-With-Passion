/*
 Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <Foundation/NSString.h>

@class NSData;

@interface NSString (FaceTimeStringAdditions)

@property (nonatomic, readonly) NSData *_FTDataFromBase64String;
@property (nonatomic, readonly) NSData *_FTDataFromHexString;

@end
