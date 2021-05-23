/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

#import <MapsSuggestions/Swift-Protocol.h>

@class NSString;

@interface MapsSuggestionsBaseTitleFormatter : NSObject <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;

- (_Bool)updateChangedTitlesForEntry:(id)arg1 title:(id)arg2 subtitle:(id)arg3 includeLockedVersions:(_Bool)arg4;
- (_Bool)resetTitlesForEntry:(id)arg1;
- (_Bool)formatTitlesForEntry:(id)arg1 eta:(id)arg2;
- (_Bool)formatTitlesForEntry:(id)arg1 distance:(double)arg2 trafficString:(id)arg3;

@end
