/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface REHTMLPageNavigationLink : NSObject

{
    NSString *_title;
    NSString *_location;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *location;

- (id)initWithLocation:(id)arg1 title:(id)arg2;

@end
