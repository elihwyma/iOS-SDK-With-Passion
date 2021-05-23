/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class NSString, TUCallCenter;

@interface _CNUIUserActionDialRequestOpener : NSObject

{
    TUCallCenter *_callCenter;
}

@property (nonatomic, readonly) TUCallCenter *callCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)errorForUnableToCastDialRequest:(id)arg1;
+ (id)errorForUnableToOpenDialRequest:(id)arg1 withUnderlyingError:(id)arg2;

- (id)init;
- (id)initWithCallCenter:(id)arg1;
- (id)openDialRequest:(id)arg1 withScheduler:(id)arg2;

@end
