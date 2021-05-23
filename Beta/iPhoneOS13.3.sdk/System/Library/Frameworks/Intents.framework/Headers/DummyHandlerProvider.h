/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface DummyHandlerProvider : NSObject

{
    id _handler;
}

@property (nonatomic, readonly) id handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithHandler:(id)arg1;
- (id)handlerForIntent:(id)arg1;

@end
