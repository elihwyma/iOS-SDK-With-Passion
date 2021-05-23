/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class NSMutableString, NSNumber, NSString;

@protocol CNTimeProvider;

@interface CNAutocompleteStoreReproStringRecorder : NSObject

{
    id <CNTimeProvider> _timeProvider;
    NSMutableString *_reproStringStorage;
    NSNumber *_lastTimestamp;
    NSString *_lastString;
}

@property (readonly) id <CNTimeProvider> timeProvider;
@property (readonly) NSMutableString *reproStringStorage;
@property (copy) NSNumber *lastTimestamp;
@property (copy) NSString *lastString;
@property (copy, nonatomic, readonly) NSString *reproString;

- (id)init;
- (id)description;
- (void)clear;
- (id)initWithTimeProvider:(id)arg1;
- (void)recordString:(id)arg1;
- (id)stringForIntervalSinceLastTimestamp:(double)arg1;
- (id)stringForKeystrokesSinceLastString:(id)arg1;

@end
