/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _FPProviderDomainChangesHandlerWrapper : NSObject

{
    CDUnknownBlockType _handler;
}

@property (copy, nonatomic) CDUnknownBlockType handler;

+ (id)wrapperWithHandler:(CDUnknownBlockType)arg1;

@end
