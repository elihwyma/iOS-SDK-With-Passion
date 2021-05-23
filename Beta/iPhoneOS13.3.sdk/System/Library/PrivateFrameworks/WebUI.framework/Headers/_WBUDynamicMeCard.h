/*
 Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

#import <NSObject.h>

@class CNContact, NSMutableArray;

@interface _WBUDynamicMeCard : NSObject

{
    NSMutableArray *_blocksPendingMeCard;
    CNContact *_me;
    _Bool _meCardExists;
}

@property (nonatomic, readonly) _Bool meCardExists;

+ (id)_contactObjectComponentForString:(id)arg1;

- (id)init;
- (id)me;
- (void)_meCardChanged:(id)arg1;
- (id)valueForProperty:(id)arg1 contact:(id)arg2;
- (void)performWhenReady:(CDUnknownBlockType)arg1;

@end
