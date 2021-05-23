/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class INExtensionContext, NSString;

@interface INExtension : NSObject <Swift>

{
    INExtensionContext *_extensionContext;
}

@property (nonatomic, readonly) INExtensionContext *_extensionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;

- (void)beginRequestWithExtensionContext:(id)arg1;
- (id)handlerForIntent:(id)arg1;

@end
