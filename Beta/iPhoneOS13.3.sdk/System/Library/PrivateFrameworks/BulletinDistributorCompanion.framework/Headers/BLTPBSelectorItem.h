/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@interface BLTPBSelectorItem : NSObject

{
    SEL _selector;
    CDUnknownFunctionPointerType _method;
}

@property (nonatomic) SEL selector;
@property (nonatomic) CDUnknownFunctionPointerType method;

@end
