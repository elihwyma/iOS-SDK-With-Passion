/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface VSUnbinder : NSObject

{
    _Bool _invalid;
    NSMapTable *_bindingsByBinder;
}

@property (nonatomic, getter=isInvalid) _Bool invalid;
@property (retain, nonatomic) NSMapTable *bindingsByBinder;

- (id)init;
- (void)dealloc;
- (void)binder:(id)arg1 didEstablishBinding:(id)arg2;
- (void)binder:(id)arg1 didTearDownBinding:(id)arg2;

@end
