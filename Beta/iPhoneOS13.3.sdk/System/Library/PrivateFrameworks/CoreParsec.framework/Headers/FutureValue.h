/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface FutureValue : NSObject

{
    id _value;
    NSObject<OS_dispatch_group> *_group;
}

@property (retain) id value;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *group;

- (id)init;

@end
