/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MapsSuggestionsBaseImprover : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;

+ (_Bool)isEnabled;

- (_Bool)improveUndecoratedTitle:(id)arg1 forEntry:(id)arg2;
- (_Bool)improveUndecoratedSubtitle:(id)arg1 forEntry:(id)arg2;
- (_Bool)improveEntry:(id)arg1;

@end
