/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
 */

#import <Foundation/NSObject.h>

@interface SGQuickResponsesReplyRecord : NSObject

{
    double _displayed;
    double _selected;
    double _matched;
}

@property (nonatomic, readonly) double displayed;
@property (nonatomic, readonly) double selected;
@property (nonatomic, readonly) double matched;

- (id)initWithDisplayed:(double)arg1 selected:(double)arg2 matched:(double)arg3;

@end
