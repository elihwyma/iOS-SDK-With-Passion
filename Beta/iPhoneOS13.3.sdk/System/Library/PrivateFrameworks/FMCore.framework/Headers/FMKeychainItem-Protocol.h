/*
 Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

#import <FMCore/Swift-Protocol.h>

@class NSData, NSDate, NSString;

@protocol FMKeychainItem <Swift>

@property (nonatomic, readonly) NSString *password;
@property (nonatomic, readonly) NSDate *lastModifyDate;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSData *rawData;

@end
