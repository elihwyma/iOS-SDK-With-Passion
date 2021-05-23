/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WFHTMLToMarkdownAbbreviation : NSObject

{
    NSString *_title;
    NSString *_abbreviation;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *abbreviation;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
