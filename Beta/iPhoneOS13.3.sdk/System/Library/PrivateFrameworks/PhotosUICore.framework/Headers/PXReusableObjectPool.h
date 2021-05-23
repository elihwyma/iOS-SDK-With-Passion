/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol PXReusableObjectPoolDelegate;

@interface PXReusableObjectPool : NSObject

{
    struct {
        _Bool respondsToDidCreateReusableObject;
        _Bool respondsToObjectBecameReusable;
        _Bool respondsToObjectPreparedForReuse;
    } _delegateFlags;
    id <PXReusableObjectPoolDelegate> _delegate;
    NSMutableDictionary *__objectCreationBlocksByReuseIdentifier;
    NSMutableDictionary *__reusableObjectsByReuseIdentifier;
}

@property (nonatomic, readonly) NSMutableDictionary *_objectCreationBlocksByReuseIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *_reusableObjectsByReuseIdentifier;
@property (weak, nonatomic) id <PXReusableObjectPoolDelegate> delegate;

- (id)init;
- (void)registerReusableObjectForReuseIdentifier:(long long)arg1 creationHandler:(CDUnknownBlockType)arg2;
- (id)checkOutReusableObjectWithReuseIdentifier:(long long)arg1;
- (void)checkInReusableObject:(id)arg1;

@end
