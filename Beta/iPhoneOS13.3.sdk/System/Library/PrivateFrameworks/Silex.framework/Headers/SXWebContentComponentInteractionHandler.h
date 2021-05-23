/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SWInteraction;

@interface SXWebContentComponentInteractionHandler : NSObject

{
    id <SWInteraction> _interaction;
}

@property (nonatomic, readonly) id <SWInteraction> interaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithInteraction:(id)arg1;
- (void)handleInteractionType:(unsigned long long)arg1 sourceView:(id)arg2 sourceRect:(struct CGRect)arg3;

@end
