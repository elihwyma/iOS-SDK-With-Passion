/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface NUArticleExcerptHTMLStripper : NSObject

{
    NSString *_strippedString;
    NSMutableArray *_parts;
}

@property (nonatomic, readonly) NSMutableArray *parts;
@property (nonatomic, readonly) NSString *strippedString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (id)initWithHTMLString:(id)arg1;
- (id)stripHTMLString:(id)arg1;

@end
