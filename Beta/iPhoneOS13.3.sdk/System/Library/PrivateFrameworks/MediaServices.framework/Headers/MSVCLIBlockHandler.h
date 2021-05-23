/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface MSVCLIBlockHandler : NSObject

{
    CDUnknownBlockType _block;
}

@property (nonatomic, readonly) CDUnknownBlockType block;

- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (void)invokeWithCommand:(id)arg1;

@end
