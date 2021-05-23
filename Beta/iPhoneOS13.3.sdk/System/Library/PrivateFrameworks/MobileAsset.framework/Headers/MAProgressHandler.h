/*
 Image: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface MAProgressHandler : NSObject

{
    unsigned long long _notificationInterval;
    NSMutableArray *_callBackArray;
}

@property (nonatomic) unsigned long long notificationInterval;
@property (nonatomic, readonly) NSMutableArray *callBackArray;

- (void)dealloc;
- (void)addCallBack:(CDUnknownBlockType)arg1;
- (id)initWithCallBack:(CDUnknownBlockType)arg1;

@end
