/*
 Image: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
 */

#import <NSObject.h>

@class NSXPCConnection;

@interface _PSMapsSuggester : NSObject

{
    NSXPCConnection *_connection;
}

- (id)init;
- (void)dealloc;
- (id)suggestionsFromContext:(id)arg1 maxSuggestions:(unsigned long long)arg2;
- (void)provideMapsFeedback:(id)arg1;
- (void)deleteMapsFeedbackEventsMatchingHandle:(id)arg1 contactId:(id)arg2 startLocationId:(id)arg3 endLocationId:(id)arg4;

@end
