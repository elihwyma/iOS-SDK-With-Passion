/*
 Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

#import <FamilyCircleUI/Swift-Protocol.h>

@class AAUIServerHookResponse, MISSING_TYPE;

@protocol AAUIServerHookDelegate;

@protocol AAUIServerHook <Swift>

@property (retain, nonatomic) AAUIServerHookResponse *serverHookResponse;
@property (weak, nonatomic) id <AAUIServerHookDelegate> delegate;

- (MISSING_TYPE *)shouldMatchElement: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)shouldMatchModel: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)processElement:attributes:objectModel:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)processObjectModel:completion: /* Error: Ran out of types for this method. */;

@end
