/*
 Image: /System/Library/Frameworks/Messages.framework/Messages
 */

#import <Foundation/NSObject.h>

@protocol _MSMessageComposeExtensionImplProtocol;

__attribute__((visibility("hidden")))
@interface _MSExtensionGlobalState : NSObject

{
    id <_MSMessageComposeExtensionImplProtocol> _activeExtensionContext;
}

@property (retain, nonatomic) id <_MSMessageComposeExtensionImplProtocol> activeExtensionContext;

+ (id)sharedInstance;

@end
