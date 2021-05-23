/*
 Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

#import <Foundation/NSObject.h>

@class NSString, WKUserScript;

@interface SWRefreshScript : NSObject

{
    WKUserScript *userScript;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) WKUserScript *userScript;
@property (nonatomic, readonly) NSString *executableScript;
@property (nonatomic, readonly) _Bool queueable;

@end
