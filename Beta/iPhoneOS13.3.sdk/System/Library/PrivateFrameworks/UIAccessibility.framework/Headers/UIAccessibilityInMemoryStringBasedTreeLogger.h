/*
 Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableString, NSString;

@interface UIAccessibilityInMemoryStringBasedTreeLogger : NSObject

{
    NSMutableString *_stringRepresentation;
    NSMutableArray *_currentPrefix;
    NSString *_prefix;
    NSString *_descriptionKey;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)stringRepresentation;
- (void)pop;
- (void)logElement:(id)arg1;
- (void)push;
- (id)initWithPrefix:(id)arg1;
- (id)initWithPrefix:(id)arg1 elementDescriptionKey:(id)arg2;
- (id)initWithElementDescriptionKey:(id)arg1;

@end
