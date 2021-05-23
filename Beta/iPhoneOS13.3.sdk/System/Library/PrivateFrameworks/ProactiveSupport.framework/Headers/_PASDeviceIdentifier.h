/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID;

@interface _PASDeviceIdentifier : NSObject

{
    NSString *_path;
}

@property (readonly) NSUUID *UUID;

- (id)init;
- (void)reset;
- (id)initWithBasePath:(id)arg1;

@end
