/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSCountedSet, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VSBinder : NSObject

{
    _Bool _establishmentProhibited;
    id _boundObject;
    NSCountedSet *_currentlyChangingBindings;
    NSMutableDictionary *_establishedBindings;
}

@property (weak, nonatomic, readonly) id boundObject;
@property (nonatomic, getter=isEstablishmentProhibited) _Bool establishmentProhibited;
@property (retain, nonatomic) NSCountedSet *currentlyChangingBindings;
@property (retain, nonatomic) NSMutableDictionary *establishedBindings;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)tearDownBinding:(id)arg1;
- (id)_infoForBinding:(id)arg1;
- (id)valueForBinding:(id)arg1;
- (id)initWithBoundObject:(id)arg1;
- (void)establishBinding:(id)arg1 withInfo:(id)arg2;
- (void)setValue:(id)arg1 forBinding:(id)arg2;

@end
