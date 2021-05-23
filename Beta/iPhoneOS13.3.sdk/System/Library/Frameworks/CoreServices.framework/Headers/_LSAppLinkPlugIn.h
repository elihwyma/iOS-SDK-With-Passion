/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class NSURLComponents, _LSAppLinkOpenState;

__attribute__((visibility("hidden")))
@interface _LSAppLinkPlugIn : NSObject

{
    NSURLComponents *_URLComponents;
    unsigned long long _limit;
    _LSAppLinkOpenState *_state;
}

@property (retain) NSURLComponents *URLComponents;
@property unsigned long long limit;
@property (retain) _LSAppLinkOpenState *state;

+ (Class)plugInClasses;
+ (_Bool)canHandleURLComponents:(id)arg1;

- (id)appLinksWithContext:(struct LSContext *)arg1 error:(id *)arg2;

@end
