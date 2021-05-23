/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol PXGadget;

@interface PXGadgetNavigationItem : NSObject

{
    _Bool _animated;
    unsigned long long _gadgetType;
    NSString *_gadgetId;
    id <PXGadget> _gadget;
    long long _navigationType;
    CDUnknownBlockType _navigationBlock;
}

@property (nonatomic, readonly) long long navigationType;
@property (nonatomic, readonly) unsigned long long gadgetType;
@property (nonatomic, readonly) NSString *gadgetId;
@property (nonatomic, readonly) id <PXGadget> gadget;
@property (copy, nonatomic, readonly) CDUnknownBlockType navigationBlock;
@property (nonatomic, readonly) _Bool animated;

- (id)initWithGadetType:(unsigned long long)arg1 navigationBlock:(CDUnknownBlockType)arg2 animated:(_Bool)arg3;
- (id)initWithGadgetId:(id)arg1 navigationBlock:(CDUnknownBlockType)arg2 animated:(_Bool)arg3;
- (id)initWithGadget:(id)arg1 navigationBlock:(CDUnknownBlockType)arg2 animated:(_Bool)arg3;

@end
