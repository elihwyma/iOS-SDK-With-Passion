/*
 Image: /System/Library/PrivateFrameworks/TransparencyDetailsView.framework/TransparencyDetailsView
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol BSInvalidatable;

@interface TDVHomeButtonHandler : NSObject

{
    CDUnknownBlockType _homeButtonHandlerCallback;
    id <BSInvalidatable> _homeButtonAssertion;
}

@property (retain, nonatomic) id <BSInvalidatable> homeButtonAssertion;
@property (copy, nonatomic) CDUnknownBlockType homeButtonHandlerCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)handlerWithCompletion:(CDUnknownBlockType)arg1;

- (void)consumeSinglePressUpForButtonKind:(long long)arg1;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopConsumingHardwarePresses;
- (void)startConsumingHardwarePresses:(CDUnknownBlockType)arg1;

@end
