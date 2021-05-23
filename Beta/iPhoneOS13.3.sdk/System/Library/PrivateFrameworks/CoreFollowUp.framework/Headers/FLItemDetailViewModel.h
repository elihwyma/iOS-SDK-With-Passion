/*
 Image: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
 */

#import <Foundation/NSObject.h>

@class FLFollowUpController, FLItemChangeObserver, NSArray, NSSet, NSString;

@interface FLItemDetailViewModel : NSObject

{
    NSArray *_originalItems;
    NSSet *_originalItemIdentifiers;
    FLFollowUpController *_controller;
    FLItemChangeObserver *_observer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithIdentifier:(id)arg1;
- (id)initWithItems:(id)arg1;
- (id)allPendingItems;
- (void)setItemChangeHandler:(CDUnknownBlockType)arg1;

@end
