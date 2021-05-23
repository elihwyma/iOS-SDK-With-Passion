/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <Foundation/NSObject.h>

@class NSArray, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface _RWIAutomaticInspectionSession : NSObject

{
    NSString *_identifier;
    NSArray *_debuggers;
    NSNumber *_pageId;
    NSString *_applicationIdentifier;
    unsigned long long _currentDebuggerIndex;
}

@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSArray *debuggers;

- (void)start;
- (void)_sendQuery;
- (id)initWithPageId:(id)arg1 applicationIdentifier:(id)arg2 debuggers:(id)arg3;
- (_Bool)receivedRejectResponse;
- (_Bool)matchesPageId:(id)arg1 applicationIdentifier:(id)arg2;

@end
