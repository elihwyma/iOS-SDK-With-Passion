/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

@class NSString, PARSession;

@interface MapsSuggestionsFlightRequester : NSObject

{
    PARSession *_session;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;

- (id)init;
- (_Bool)requestFlightsWithNumber:(unsigned long long)arg1 airlineCode:(id)arg2 departureDate:(id)arg3 handler:(CDUnknownBlockType)arg4;

@end
