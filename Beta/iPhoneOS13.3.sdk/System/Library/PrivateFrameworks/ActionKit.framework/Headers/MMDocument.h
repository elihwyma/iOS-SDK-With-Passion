/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface MMDocument : NSObject

{
    NSMutableArray *_elements;
    NSString *_markdown;
}

@property (copy, nonatomic) NSArray *elements;
@property (copy, nonatomic, readonly) NSString *markdown;

+ (id)documentWithMarkdown:(id)arg1;

- (void)addElement:(id)arg1;
- (id)initWithMarkdown:(id)arg1;

@end
