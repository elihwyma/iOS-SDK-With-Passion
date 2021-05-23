/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFActionBuilder.h>

@interface HFShortcutActionBuilder : HFActionBuilder

+ (Class)homeKitRepresentationClass;

- (id)commitItem;
- (id)createNewAction;
- (_Bool)isAffectedByEndEvents;
- (id)performValidation;

@end
