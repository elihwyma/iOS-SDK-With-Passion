/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class SXComponentView;

@protocol SXComponentInteractionHandler;

@interface SXComponentInteraction : NSObject

{
    SXComponentView *_componentView;
    id <SXComponentInteractionHandler> _handler;
    unsigned long long _types;
}

@property (weak, nonatomic, readonly) SXComponentView *componentView;
@property (nonatomic, readonly) id <SXComponentInteractionHandler> handler;
@property (nonatomic, readonly) unsigned long long types;

- (id)initWithComponentView:(id)arg1 handler:(id)arg2 types:(unsigned long long)arg3;
- (_Bool)handlesType:(unsigned long long)arg1;

@end
