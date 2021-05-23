/*
 Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

#import <Foundation/NSObject.h>

@class NSString, WKUserScript;

@interface SWPresentationStateScript : NSObject

{
    WKUserScript *userScript;
    unsigned long long _presentationState;
}

@property (nonatomic, readonly) unsigned long long presentationState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) WKUserScript *userScript;
@property (nonatomic, readonly) NSString *executableScript;
@property (nonatomic, readonly) _Bool queueable;

- (id)initWithPresentationState:(unsigned long long)arg1;

@end
