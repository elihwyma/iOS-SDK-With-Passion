/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, _CDPeopleSuggesterContext, _CDPeopleSuggesterSettings;

@interface _CDCachedPeopleSuggestion : NSObject

{
    NSDate *_date;
    _CDPeopleSuggesterContext *_context;
    _CDPeopleSuggesterSettings *_settings;
    NSArray *_suggestions;
}

@property (retain) NSDate *date;
@property (retain) _CDPeopleSuggesterContext *context;
@property (retain) _CDPeopleSuggesterSettings *settings;
@property (retain) NSArray *suggestions;

- (_Bool)isValidForContext:(id)arg1 settings:(id)arg2 timeoutSeconds:(double)arg3;
- (_Bool)isValidForContext:(id)arg1;
- (_Bool)isValidForSettings:(id)arg1;

@end
