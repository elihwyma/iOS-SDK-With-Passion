/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXJSONAction.h>

@class NSString;

@protocol SXAction;

@interface SXJSONSubscribeAction : SXJSONAction

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) id <SXAction> postPurchaseAction;

+ (Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2;

@end
