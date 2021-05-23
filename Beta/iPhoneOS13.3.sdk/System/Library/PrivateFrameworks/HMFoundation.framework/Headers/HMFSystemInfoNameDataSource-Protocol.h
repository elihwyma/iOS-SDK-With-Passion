/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

#import <HMFoundation/Swift-Protocol.h>

@class NSString;

@protocol HMFSystemInfoNameDataSourceDelegate;

@protocol HMFSystemInfoNameDataSource <Swift>

@property (weak) id <HMFSystemInfoNameDataSourceDelegate> delegate;
@property (copy, nonatomic, readonly) NSString *name;

@end
