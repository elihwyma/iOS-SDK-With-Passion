/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSDate;

@interface PXCPLServiceStatus : NSObject <Swift>

{
    _Bool _inResetSync;
    float _pendingProgress;
    long long _state;
    long long _pauseReason;
    unsigned long long _activity;
    long long _action;
    unsigned long long _pendingNumberOfItems;
    NSDate *_syncDate;
    NSDate *_exitDate;
    unsigned long long _numberOfItemsFailingToUpload;
    unsigned long long _numberOfPhotoAssets;
    unsigned long long _numberOfVideoAssets;
    unsigned long long _numberOfOtherAssets;
    unsigned long long _numberOfReferencedItems;
}

@property (nonatomic) long long state;
@property (nonatomic) long long pauseReason;
@property (nonatomic) unsigned long long activity;
@property (nonatomic) long long action;
@property (nonatomic) float pendingProgress;
@property (nonatomic) unsigned long long pendingNumberOfItems;
@property (nonatomic) _Bool inResetSync;
@property (retain, nonatomic) NSDate *syncDate;
@property (retain, nonatomic) NSDate *exitDate;
@property (nonatomic) unsigned long long numberOfItemsFailingToUpload;
@property (nonatomic) unsigned long long numberOfPhotoAssets;
@property (nonatomic) unsigned long long numberOfVideoAssets;
@property (nonatomic) unsigned long long numberOfOtherAssets;
@property (nonatomic) unsigned long long numberOfReferencedItems;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToCPLServiceStatus:(id)arg1;

@end
