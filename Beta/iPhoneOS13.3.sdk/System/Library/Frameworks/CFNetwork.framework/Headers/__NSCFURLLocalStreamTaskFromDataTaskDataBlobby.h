/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@protocol OS_dispatch_data;

@interface __NSCFURLLocalStreamTaskFromDataTaskDataBlobby : NSObject

{
    NSObject<OS_dispatch_data> *_remainingData;
    CDUnknownBlockType _completion;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (int)drain:(struct __CFWriteStream *)arg1;
- (void)callCompletion;

@end
