/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXAction;

@interface SXSubscribeAction : NSObject

{
    id <SXAction> postPurchaseAction;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) id <SXAction> postPurchaseAction;

@end
