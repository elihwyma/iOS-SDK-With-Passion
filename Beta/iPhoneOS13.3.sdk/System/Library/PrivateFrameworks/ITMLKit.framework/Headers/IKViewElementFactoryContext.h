/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKViewElement, IKViewElementStyleFactory;

@interface IKViewElementFactoryContext : NSObject

{
    IKViewElementStyleFactory *_styleFactory;
    IKViewElement *_headViewElement;
    IKViewElement *_navigationBarViewElement;
    IKViewElement *_toolBarViewElement;
    IKViewElement *_templateViewElement;
    unsigned long long _updateType;
}

@property (retain, nonatomic) IKViewElementStyleFactory *styleFactory;
@property (retain, nonatomic) IKViewElement *headViewElement;
@property (retain, nonatomic) IKViewElement *navigationBarViewElement;
@property (retain, nonatomic) IKViewElement *toolBarViewElement;
@property (retain, nonatomic) IKViewElement *templateViewElement;
@property (nonatomic) unsigned long long updateType;

@end
