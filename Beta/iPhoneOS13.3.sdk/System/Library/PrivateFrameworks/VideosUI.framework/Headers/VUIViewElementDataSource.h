/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class IKViewElement, NSDictionary, VUIRouterDataSource;

__attribute__((visibility("hidden")))
@interface VUIViewElementDataSource : NSObject

{
    NSDictionary *_dataDictionary;
    VUIRouterDataSource *_routerDataSource;
    IKViewElement *_viewElement;
}

@property (copy, nonatomic) NSDictionary *dataDictionary;
@property (retain, nonatomic) VUIRouterDataSource *routerDataSource;
@property (weak, nonatomic) IKViewElement *viewElement;

- (id)initWithDataDictionary:(id)arg1 viewElement:(id)arg2;

@end
