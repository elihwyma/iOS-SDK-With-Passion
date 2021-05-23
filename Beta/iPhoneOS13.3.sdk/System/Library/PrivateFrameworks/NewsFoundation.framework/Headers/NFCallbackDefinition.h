/*
 Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

#import <Foundation/NSObject.h>

@protocol NFDefinitionContainer;

@interface NFCallbackDefinition : NSObject

{
    CDUnknownBlockType _callbackBlock;
    id <NFDefinitionContainer> _privateContainer;
}

@property (nonatomic, readonly) CDUnknownBlockType callbackBlock;
@property (nonatomic, readonly) id <NFDefinitionContainer> privateContainer;

- (id)initWithCallbackBlock:(CDUnknownBlockType)arg1 privateContainer:(id)arg2;

@end
