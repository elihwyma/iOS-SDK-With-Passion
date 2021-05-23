/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface DCURLGenerator : NSObject

@property (nonatomic, readonly) NSString *scheme;
@property (nonatomic, readonly) NSString *host;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) NSString *query;

- (id)URL;

@end
