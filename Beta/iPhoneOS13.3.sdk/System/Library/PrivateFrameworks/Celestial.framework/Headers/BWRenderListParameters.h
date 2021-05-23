/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSString;

@interface BWRenderListParameters : NSObject

{
    struct BWRenderListParameterList _parameterList;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct BWRenderListParameterList *parameterList;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (struct BWRenderListParameterNode *)firstNode;
- (id)initWithParameterList:(struct BWRenderListParameterList *)arg1;

@end
