/*
 Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

#import <SilexWeb/Swift-Protocol.h>

@class NSError;

@protocol SWErrorProvider <Swift>

@property (nonatomic, readonly) NSError *error;
@property (copy, nonatomic, setter=onError:) CDUnknownBlockType block;

@end
