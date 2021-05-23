/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKViewElement, NSDictionary;

@interface IKServiceContext : NSObject

{
    NSDictionary *_contextDictionary;
    IKViewElement *_element;
}

@property (copy, nonatomic, readonly) NSDictionary *contextDictionary;
@property (nonatomic, readonly) IKViewElement *element;

- (id)initWithContextDictionary:(id)arg1 element:(id)arg2;

@end
