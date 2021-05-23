/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <MapsSuggestions/MapsSuggestionsBaseFilter.h>

@class NSString;

@interface MapsSuggestionsBlockFilter : MapsSuggestionsBaseFilter

{
    NSString *_name;
    CDUnknownBlockType _block;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;

+ (id)filterWithBlock:(CDUnknownBlockType)arg1;
+ (_Bool)isEnabled;

- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)shouldKeepEntry:(id)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1 name:(struct NSString *)arg2;

@end
