/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface LPCSSVariable : NSObject

{
    _Bool _important;
    NSString *_name;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly, getter=isImportant) _Bool important;

- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 important:(_Bool)arg2;
- (id)variableByResolvingWithThemePath:(id)arg1;

@end
