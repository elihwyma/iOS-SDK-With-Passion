/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXEmbedComponentView.h>

@class SXEmbedResource;

@interface SXLegacyEmbedComponentView : SXEmbedComponentView

{
    SXEmbedResource *_embedResource;
}

@property (retain, nonatomic) SXEmbedResource *embedResource;

@end
