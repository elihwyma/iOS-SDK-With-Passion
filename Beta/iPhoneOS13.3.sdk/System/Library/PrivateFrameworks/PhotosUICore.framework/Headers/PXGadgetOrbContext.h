/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@protocol PXGadget;

@interface PXGadgetOrbContext : NSObject

{
    id <PXGadget> _gadget;
}

@property (retain, nonatomic) id <PXGadget> gadget;

@end
