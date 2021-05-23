/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSString;

@interface SXComponentInteractionHandlerManager : NSObject

{
    NSMapTable *_interactionHandlers;
}

@property (nonatomic, readonly) NSMapTable *interactionHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)addInteractionHandler:(id)arg1 componentView:(id)arg2 types:(unsigned long long)arg3;
- (void)removeInteractionHandler:(id)arg1 componentView:(id)arg2;
- (id)componentViewForLocation:(struct CGPoint)arg1;
- (id)interactionsForComponentView:(id)arg1;
- (id)interactionsForComponentView:(id)arg1 type:(unsigned long long)arg2;
- (void)updateUserInteractionForComponentView:(id)arg1;

@end
