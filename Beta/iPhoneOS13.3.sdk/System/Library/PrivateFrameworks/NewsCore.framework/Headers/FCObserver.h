/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FCObserver : NSObject

{
    unsigned long long _token;
    id _keepAliveObject;
    CDUnknownBlockType _observerBlock;
}

@property (nonatomic) unsigned long long token;
@property (weak, nonatomic) id keepAliveObject;
@property (copy, nonatomic) CDUnknownBlockType observerBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)initWithToken:(unsigned long long)arg1;
- (void)dispose;
- (void)disposeOn:(id)arg1;

@end
