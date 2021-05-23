/*
 Image: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
 */

#import <TestFlightCore/TFFeedbackEntry.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TFFeedbackEntryShortText : TFFeedbackEntry

{
    NSString *_placeholder;
    unsigned long long _contentType;
}

@property (copy, nonatomic, readonly) NSString *placeholder;
@property (nonatomic, readonly) unsigned long long contentType;

- (id)initWithIdentifier:(id)arg1 title:(id)arg2 placeholder:(id)arg3 contentType:(unsigned long long)arg4;

@end
