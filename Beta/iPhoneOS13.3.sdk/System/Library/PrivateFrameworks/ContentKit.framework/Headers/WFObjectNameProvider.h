/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface WFObjectNameProvider : NSObject

{
    NSDictionary *_contents;
}

@property (copy, nonatomic, readonly) NSDictionary *contents;

+ (id)sharedProvider;

- (id)init;
- (id)nameForObject:(id)arg1;

@end
