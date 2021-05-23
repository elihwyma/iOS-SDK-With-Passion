/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/Swift-Protocol.h>

@class NSString;

@protocol FCNewsVersionAccessCheckable <Swift>

@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long minimumNewsVersion;

@end
