/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <Foundation/NSObject.h>

@class SCRCArgumentHolderPrivate;

@interface SCRCArgumentHolder : NSObject

{
    SCRCArgumentHolderPrivate *_private;
}

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (long long)compare:(id)arg1;
- (void)setTarget:(id)arg1;
- (id)target;
- (id)argument;
- (SEL)action;
- (_Bool)process;
- (void)setAction:(SEL)arg1;
- (_Bool)isRequired;
- (id)option;
- (void)setArgument:(id)arg1;
- (void)setOption:(id)arg1;
- (id)argumentDescription;
- (void)setArgumentDescription:(id)arg1;
- (void)setIsRequired:(_Bool)arg1;

@end
