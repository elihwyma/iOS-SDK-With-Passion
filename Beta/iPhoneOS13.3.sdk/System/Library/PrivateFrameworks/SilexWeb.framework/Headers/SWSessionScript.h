/*
 Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

#import <Foundation/NSObject.h>

@class NSString, WKUserScript;

@protocol SWSession;

@interface SWSessionScript : NSObject

{
    id <SWSession> _session;
}

@property (nonatomic, readonly) id <SWSession> session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) WKUserScript *userScript;
@property (nonatomic, readonly) NSString *executableScript;
@property (nonatomic, readonly) _Bool queueable;

- (id)initWithSession:(id)arg1;
- (_Bool)queuable;

@end
