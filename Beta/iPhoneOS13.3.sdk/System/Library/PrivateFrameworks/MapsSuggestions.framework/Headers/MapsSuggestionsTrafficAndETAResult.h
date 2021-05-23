/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MapsSuggestionsTrafficAndETAResult : NSObject

{
    _Bool _isSuccess;
    double _seconds;
    NSString *_shortTrafficString;
    NSString *_longTrafficString;
}

@property (nonatomic) _Bool isSuccess;
@property (nonatomic) double seconds;
@property (copy, nonatomic) NSString *shortTrafficString;
@property (copy, nonatomic) NSString *longTrafficString;

- (id)initWithGEOTrafficAndETAResult:(id)arg1;

@end
