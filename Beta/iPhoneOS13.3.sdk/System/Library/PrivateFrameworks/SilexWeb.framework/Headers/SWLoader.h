/*
 Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

#import <Foundation/NSObject.h>

@interface SWLoader : NSObject

{
    CDUnknownBlockType _loadBlock;
}

@property (nonatomic, readonly) CDUnknownBlockType loadBlock;

+ (id)loaderWithBlock:(CDUnknownBlockType)arg1;

- (void)load;

@end
