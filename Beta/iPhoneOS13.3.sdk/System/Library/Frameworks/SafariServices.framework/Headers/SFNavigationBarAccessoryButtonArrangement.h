/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSSet;

__attribute__((visibility("hidden")))
@interface SFNavigationBarAccessoryButtonArrangement : NSObject

{
    NSSet *_allButtonTypes;
    NSArray *_trailingButtonTypes;
    NSArray *_leadingButtonTypes;
}

@property (nonatomic, readonly) NSArray *trailingButtonTypes;
@property (nonatomic, readonly) NSArray *leadingButtonTypes;

- (id)initWithLeadingButtonTypes:(id)arg1 trailingButtonTypes:(id)arg2;
- (_Bool)containsButtonType:(long long)arg1;
- (void)enumerateButtonTypesFromEdge:(unsigned long long)arg1 withLayoutDirection:(long long)arg2 usingBlock:(CDUnknownBlockType)arg3;

@end
